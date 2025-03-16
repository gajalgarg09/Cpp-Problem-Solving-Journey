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
    