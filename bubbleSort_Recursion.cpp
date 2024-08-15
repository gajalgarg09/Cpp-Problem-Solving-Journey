#include<iostream>
using namespace std;

void bubble_sort(int *arr , int n){

    if( n == 0 || n == 1)
        return ;

    for(int i = 0 ; i<n-1; i++){
        if( arr[i] > arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }
    bubble_sort( arr , n-1);
}

int main(){

    int arr[7] = { 235,89,54,2,3,9,22};
    
    bubble_sort( arr , 7);

    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }




    return 0;
}