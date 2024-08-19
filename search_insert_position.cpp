#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int s = 0;
        int e = nums.size();
        int mid = -1;

        if( target > nums[e-1]) 
            return e;

        while(s<=e){
            mid = s + (e-s)/2;

            if( nums[mid] == target )
                return mid;

            if( nums[mid] > target)
                e = mid-1;
            else
                s = mid + 1;
        }
        

        return s;
    }
};