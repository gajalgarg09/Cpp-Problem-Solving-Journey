// Given an array, arr[] and an integer x, return true if there exists a pair of elements in the array 
// whose absolute difference is x, otherwise, return false.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool findPair(vector<int> nums, int target){

    int n = nums.size();
    sort(nums.begin() , nums.end());

    int j = 1;

    for(int i =0; i<n; i++){

        while(j <n && nums[j] - nums[i] < target){
            j++;
        }

        if(j<n && i!=j && nums[j]-nums[i == target]){
            return true;
        }
    }
    return false;
}
