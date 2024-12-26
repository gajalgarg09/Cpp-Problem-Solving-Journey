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

