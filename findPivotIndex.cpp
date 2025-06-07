// Given an array of integers nums, calculate the pivot index of this array.
// The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal 
// to the sum of all the numbers strictly to the index's right.
// If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. 
// This also applies to the right edge of the array.
// Return the leftmost pivot index. If no such index exists, return -1.

#include<iostream>
#include<vector>
using namespace std;

int pivotIndex(vector<int> nums){

    int n = nums.size();

    int totalSum = 0;
    for(int i =0; i<n; i++){
        totalSum += nums[i];
    }

    int leftSum = 0;
    for(int i =0; i<n ;i++){
        int rightSum = totalSum - leftSum - nums[i];
        if(leftSum == rightSum){
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int result = pivotIndex(nums);
    cout << "Pivot index is: " << result << endl;
    return 0;
}
