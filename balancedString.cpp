#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int minSwaps(string s) {
        int open = 0;
        int n = s.size();
        for(int i =0; i<n; i++){
            char ch = s[i];
            if( ch == '[')
                open++;
            else if( open > 0)
                open--;
        }
        return (open + 1)/2;
    }
};