// You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
// Now, your task is to find the first and last occurrence of ‘k’ in 'arr'.
// Note :
// 1. If ‘k’ is not present in the array, then the first and the last occurrence will be -1. 
// 2. 'arr' may contain duplicate elements.
    
#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int>& arr , int n , int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){

        if(arr[mid] == key){
            ans = mid;
            e = mid -1;
        }
        else if( arr[mid] > key){
            e = mid-1;
        }
        else{
            s = mid +1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOccur(vector<int>& arr , int n , int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            s = mid +1;

        }
        else if( arr[mid] > key){
            e = mid-1;
        }
        else{
            s = mid +1;
        }
        mid  = s + (e-s)/2;
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first = firstOcc(arr , n , k);
    p.second = lastOccur(arr , n , k);

    return p;
}
