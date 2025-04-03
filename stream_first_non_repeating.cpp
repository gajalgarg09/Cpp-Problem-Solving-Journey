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