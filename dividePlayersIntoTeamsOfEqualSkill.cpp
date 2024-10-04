#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        
        sort(skill.begin() , skill.end());
        int n = skill.size();

        if( n%2 != 0)
            return -1;

        long long sum = skill[0] + skill[n-1];
        long long ans = 0;
        for(int i = 0; i<n/2; i++){
            if(skill[i] + skill[n-i-1] == sum ){
                ans += (skill[i]*skill[n-i-1]); 
            }
            else{
                return -1;
            }
        }
       return ans; 
    }
};
