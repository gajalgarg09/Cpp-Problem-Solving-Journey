#include<iostream>
#include<vector>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    // Check divisibility using 6k ± 1 rule
    // it's more optimized approach
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int diagonalPrime(vector<vector<int>>& nums) {
    int numsSize = nums.size();
    int ans = 0;

    for(int i =0; i<numsSize; i++){
        if(isPrime(nums[i][i])){
            ans = max(ans , nums[i][i]);
        }

        if(isPrime(nums[i][numsSize-i-1])){
            ans = max(ans , nums[i][numsSize-i-1]);
        }
    }
    return ans;  
}