#include<iostream>
#include<vector>
using namespace std;

int lengthOfLongestSubstring(string s){

    int n = s.length();
    int l =0, r =0, maxLen = 0;

    vector<int> hashArray(255, -1);

    while(r < n){
        if(hashArray[s[r]] != -1){
            if(hashArray[s[r]] >= l){
                l = hashArray[s[r]] + 1;
            }
        }

        int len = r - l + 1;
        maxLen = max(maxLen , len);
        hashArray[s[r]] = r;
        r++;
    }
    return maxLen;
}