#include<iostream>
#include<string>
using namespace std;

class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            string answer = "";
            int n1 = word1.length();
            int n2 = word2.length();
            int n =  max(n1,n2);
            for(int i =0; i<n; i++){
                if( i <n1) answer.push_back(word1[i]);
                if( i <n2) answer.push_back(word2[i]);
            }
            return answer;
        }
    };