// Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:
// [4,5,6,7,0,1,2] if it was rotated 4 times.
// [0,1,2,4,5,6,7] if it was rotated 7 times.
// Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].
// Given the sorted rotated array nums of unique elements, return the minimum element of this array.

// Time comlexity : O(log n)
// Space complexity : O(1)
#include<iostream>
#include<vector>
using namespace std;

int findMin(vector<int> nums){

    int s = 0;
    int e = nums.size()-1;

    while ( s < e){
        int mid = s + (e-s)/2;

        if( nums[mid] < nums[e]){
            e = mid; // min on left side
        }
        else{
            s = mid + 1;
        }
    }
    return nums[s];
}
