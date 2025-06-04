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