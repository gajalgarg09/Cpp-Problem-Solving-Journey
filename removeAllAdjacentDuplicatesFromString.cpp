#include<iostream>
#include<string>
using namespace std;

string removeDuplicated(string s){
    string result;

    for(char ch : s){
        if(!result.empty() && result.back() == ch){
            result.pop_back();
        }
        else{
            result.push_back(ch);
        }
    }
    return result;
}