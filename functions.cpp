#include<iostream>
using namespace std;

void print(int *p){
    cout << p << endl;  // will print the address
    cout << *p << endl; // will print thee value
}

void update(int *p){
    //p = p + 1;
    //cout << "Inside : " << p <<  endl;

    // now the value will be updated
    *p = *p + 2;
}

int getSum(int arr[] , int n){
    // here the whole array isn't passing but the pointer is being passed
    // benefit is that we can pass a part of array
    int sum =0;
    for(int i =0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int value = 5;
    int *p = &value;

    // print(p);

// same value will be printed because the value is updated for the function's p 
    cout << "Before : " << *p << endl;
    update(p);
    cout <<"After : " << *p << endl;


    int arr[6] = {1,3,6,8,9, 10};
    cout << "Sum is : " << getSum(arr , 5) << endl;
    cout << "Sum is : " << getSum(arr+3 , 6) << endl;

    return 0;
}