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

