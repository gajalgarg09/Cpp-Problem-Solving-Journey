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