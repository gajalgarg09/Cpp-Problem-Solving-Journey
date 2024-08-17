// Given a string 's' consisting of words and spaces, return the length of the last word in the string.
// A word is a maximal substring consisting of non-space characters only.

#include<iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {

        int length = 0;
        bool count = false;

        for(int i = s.length()-1; i>=0; i--){
            if(s[i] != ' '){
                length++;
                count = true;
            }
            else if(count){
                break;
            }
        }
       
       return length; 
    }
};

