// You are given a string s consisting of lowercase English letters. 
// A duplicate removal consists of choosing two adjacent and equal letters
// and removing them.
// We repeatedly make duplicate removals on s until we no longer can.
// Return the final string after all such duplicate removals have been made.
// It can be proven that the answer is unique.

// Input: s = "abbaca"
// Output: "ca"

#include<iostream>
#include<string>
using namespace std;

string removeDuplicated(string s){
    string result;

    for(char ch : s){
        // here our result acts like a stack where we check that if the element in 's' is same as top of result we remove the top element 
        // because it means that we have duplicates
        if(!result.empty() && result.back() == ch){
            result.pop_back();
        }
        else{
            result.push_back(ch);
        }
    }
    return result;
}
