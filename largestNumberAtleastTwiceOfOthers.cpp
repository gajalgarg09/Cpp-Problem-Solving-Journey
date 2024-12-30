// You are given an integer array nums where the largest integer is unique.
// Determine whether the largest element in the array is at least twice as much as every other number in the array. 
// If it is, return the index of the largest element, or return -1 otherwise.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int x = nums[0];
        int y =0;

        for(int i =1; i<nums.size(); i++){
            if( x <nums[i]){
                x = nums[i];
                y = i;
            }
        }

        for(int i =0 ; i<nums.size(); i++){
           if( x == nums[i])
            continue;

            if( x < nums[i]*2)
                return -1;
        }
        return y;
    }
};
