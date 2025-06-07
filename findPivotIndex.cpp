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
