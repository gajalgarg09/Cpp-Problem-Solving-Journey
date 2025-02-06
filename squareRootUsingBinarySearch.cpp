// You are given a positive integer ‘n’.
// Your task is to find and return its square root. 
// If ‘n’ is not a perfect square, then return the floor value of sqrt(n).

#include<iostream>
using namespace std;

long long int binarySearch(int n){
    int s = 0;
    int e = n;
    int ans = -1; 

    while(s <= e){
        long long int mid = s + (e - s) / 2;
        long long int square = mid * mid;

        if(square == n){
            return mid;
        }
        if(square < n){
            ans = mid;  
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans;
}

int floorSqrt(int n)
{
    return binarySearch(n);
}
