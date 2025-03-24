// Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. 
// If no such indices exists, return false.

#include<iostream>
#include<vector>
using namespace std;

bool increasingTriplet(vector<int> nums){

    int first = INT_MAX , second = INT_MAX;

    for(int n : nums){

        if( n <= first){
            first = n;
        }
        else if(n <= second){
            second = n;
        }
        else{
            return true;
        }
    }
    return false;
}
