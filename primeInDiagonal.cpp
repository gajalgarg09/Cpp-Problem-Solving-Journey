// You are given a 0-indexed two-dimensional integer array nums.
// Return the largest prime number that lies on at least one of the diagonals of nums. In case, no prime is present on any of the diagonals, return 0.
// Note that:
// An integer is prime if it is greater than 1 and has no positive integer divisors other than 1 and itself.
// An integer val is on one of the diagonals of nums if there exists an integer i for which nums[i][i] = val or an i for which nums[i][nums.length - i - 1] = val.

// Time comlexity = O(N* (root M))
// N -> size of matrix
// M -> maximum element


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
