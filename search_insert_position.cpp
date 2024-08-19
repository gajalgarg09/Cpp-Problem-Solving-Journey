// Problem Statement
// Given a sorted array of distinct integers and a target value, return the index if the target is found.
// If not, return the index where it would be if it were inserted in order.
// You must write an algorithm with O(log n) runtime complexity.

// We've used the concept of Binary Search in the question.

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
