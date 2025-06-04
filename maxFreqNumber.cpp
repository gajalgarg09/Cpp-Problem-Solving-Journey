// Ninja is given an array of integers that contain numbers in random order. He needs to write a program to find and return the number 
// which occurs the maximum times in the given input. He needs your help to solve this problem.
// If two or more elements contend for the maximum frequency, return the element which occurs in the array first i.e. whose index is lowest.
// For example,
// For 'arr' = [ 1, 2, 3, 1, 2]. you need to return 1.

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int maximumFrequency(vector<int> nums , int n){
    unordered_map<int , int> count;
    int maxFreq = 0;
    int maxAns = 0;

    for(int i =0; i<nums.size(); i++){
        count[nums[i]]++;
        maxFreq = max(maxFreq , count[nums[i]]);
    }

    for(int i =0; i<nums.size(); i++){
        if(maxFreq == count[nums[i]]){
            maxAns = nums[i];
        }
    }
return maxAns;
}

int main(){
    vector<int> nums = {1,2,1,3,4,3,2,1};
    int result = maximumFrequency(nums , nums.size());
    cout << result;
}
