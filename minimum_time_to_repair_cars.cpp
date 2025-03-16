// You are given an integer array ranks representing the ranks of some mechanics. ranksi is the rank of the ith mechanic. 
// A mechanic with a rank r can repair n cars in r * n2 minutes.
// You are also given an integer cars representing the total number of cars waiting in the garage to be repaired.
// Return the minimum time taken to repair all the cars.
// Note: All the mechanics can repair the cars simultaneously.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        bool canRepairInTime(vector<int>& ranks, int cars, long long mid) {
            long long totalCars = 0;
            for (int r : ranks) {
                totalCars += sqrt(mid / r);
                if (totalCars >= cars) return true;
            }
            return false;
        }
    
        long long repairCars(vector<int>& ranks, int cars) {
            long long left = 1, right = (long long)ranks[0] * cars * cars, ans = right;
    
            while (left <= right) {
                long long mid = left + (right - left) / 2;
                if (canRepairInTime(ranks, cars, mid)) {
                    ans = mid;
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
            return ans;
        }
    };
    
