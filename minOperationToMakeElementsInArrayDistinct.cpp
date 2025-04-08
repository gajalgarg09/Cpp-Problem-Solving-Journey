// You are given an integer array nums. You need to ensure that the elements in the array are distinct. 
// To achieve this, you can perform the following operation any number of times:
// Remove 3 elements from the beginning of the array. If the array has fewer than 3 elements, remove all remaining elements.
// Note that an empty array is considered to have distinct elements. 
// Return the minimum number of operations needed to make the elements in the array distinct.


#include<iostream>
#include<vector>
using namespace std;

int minimumOperation(vector<int> &nums){

    vector<int> mpp(101);

    for(int i =nums.size()-1; i>=0; i--){
        if(++mpp[nums[i]] > 1){
            return (i+3)/3;
        }
        return 0;
    }
}
