// You are given an integer array nums consisting of 2 * n integers.
// You need to divide nums into n pairs such that:
// Each element belongs to exactly one pair.
// The elements present in a pair are equal.
// Return true if nums can be divided into n pairs, otherwise return false.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
        bool divideArray(vector<int>& nums) {
            int n = nums.size();
            sort(nums.begin() , nums.end());
            
            for(int i =0; i<n; i+=2){
                if(nums[i] != nums[i+1]){
                    return false;
                }
            }
            return true;
        }
    };
