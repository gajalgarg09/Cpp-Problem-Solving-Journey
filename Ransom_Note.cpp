#include<iostream>
using namespace std;
class Solution {
    public:
        bool canConstruct(string ransomNote, string magazine) {
            if( ransomNote.length() > magazine.length()){
                return false;
            }
    
            int freq[26] = {0};
    
            for(char c : magazine){
                freq[c-'a']++;
            }
    
            for(char c : ransomNote){
                if(--freq[c-'a'] < 0){
                    return false;
                }
            }
            return true;
        }
    };