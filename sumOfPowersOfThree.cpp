// Given an integer n, return true if it is possible to represent n as the sum of distinct powers of three. Otherwise, return false.
// An integer y is a power of three if there exists an integer x such that y == 3x.

#include<iostream>
using namespace std;

class Solution {
    public:
        bool checkPowersOfThree(int n) {
            while( n > 0){
                int remainder = n % 3;
                if ( remainder == 0 || remainder == 1){
                    n = n / 3;
                }
                else{
                    return false;
                }
            }
            return true;
        }
    };