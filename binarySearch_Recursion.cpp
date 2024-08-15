// Binary Search using Recursion

#include<iostream>
using namespace std;

bool binarySearch(int arr[] , int s , int e , int key){

    if( s>e)
        return false;

    int mid = s + (e-s)/2;

    if(arr[mid] == key )
        return true;

    if( arr[mid] > key){
        return binarySearch( arr, s , mid-1 , key);
    }
    else{
        return binarySearch( arr , mid+1 , e, key);
    }
}

int main(){

    int arr[6] = {1,2,3,4,5,6};
    int size = 5;
    int key = 7;

    cout << "Present or not : " << binarySearch( arr , 0 , 5 , key);




    return 0;
}
