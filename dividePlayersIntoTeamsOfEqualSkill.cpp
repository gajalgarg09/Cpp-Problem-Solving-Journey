// You are given a positive integer array skill of even length n where skill[i] denotes the skill of the ith player.
// Divide the players into n / 2 teams of size 2 such that the total skill of each team is equal.
// The chemistry of a team is equal to the product of the skills of the players on that team.
// Return the sum of the chemistry of all the teams, or return -1 if there is no way to divide the players into teams such that the total skill of each team is equal.

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
