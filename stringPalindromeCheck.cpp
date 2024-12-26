// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, 
// it reads the same forward and backward. Alphanumeric characters include letters and numbers.
// Given a string s, return true if it is a palindrome, or false otherwise.

#include<iostream>
using namespace std;

class Solution {
public:

    string removeAlphaNumeric(string &str){
        string result;
        for(char ch : str){
             if(isalnum(ch)){
                result += tolower(ch);
             }
        }
      return result; 
    }
    bool isPalindrome(string s) {

        s = removeAlphaNumeric(s);
        int n = s.length();
        for(int i =0; i<n/2; i++){
            if(s[i] != s[n-i-1]){
                return false;
            }
        }
      return true; 
    }
};

