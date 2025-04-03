// Given an input stream s consisting only of lowercase alphabets. While reading characters from the stream, 
// you have to tell which character has appeared only once in the stream upto that point. 
// If there are many characters that have appeared only once, you have to tell which one of them was the first one to appear.
// If there is no such character then append '#' to the answer.
// NOTE:
// 1. You need to find the answer for every i (0 <= i < n)
// 2. In order to find the solution for every you need to consider the string from starting position till the ith position.

#include<iostream>
#include<unordered_map>
#include<queue>
using namespace std;

string firstNonRepeating(string &s){

    unordered_map<char , int> count;
    queue<char> q;
    string ans = "";

    for(int i =0; i<s.length(); i++){
        char ch = s[i];

        // increasing th count
        count[ch]++;

        // pushing in queue
        q.push(ch);

        while(!q.empty()){
            if(count[q.front()] > 1){
                q.pop();
            }
            else{
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty()){
            ans.push_back('#');
        }
    }
    return ans;
}

int main(){
    string s = "abc";
    cout << firstNonRepeating(s) << endl;
    return 0;
}
