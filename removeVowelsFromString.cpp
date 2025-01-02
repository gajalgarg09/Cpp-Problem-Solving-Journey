#include<iostream>
#include<string>
using namespace std;

string removeVowel(string s){
    string ans = "";

    for(int i =0; i<s.size(); i++){

        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U'){
            continue;
        }
        ans.push_back(s[i]);
    }
    return ans;
}