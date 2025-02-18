#include<iostream>
using namespace std;

int main(){
    /*
    int arr[10]  ={3,5,3,8,6};
    // both will give same answers
    cout << "Address : " << arr << endl;
    cout << "Address :" << &arr[0] << endl;

    // it will print the first value
    cout << *arr << endl;     // 3
    cout << *arr+1 << endl;   // 4
    cout << *(arr+1) << endl;   // will print arr[1]

    int i = 4;
    cout << i[arr] << endl;  // arr[i] = i[arr]
*/

/*
    int temp[10];
    cout <<  "Size of array : " <<sizeof(temp) << endl;

    int *ptr = &temp[0];
    cout <<"Size of pointer : "  << sizeof(ptr) << endl;

    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;
*/

    /*
    int a[10] = {10,3,5,6,7};
    // all will give the same answer
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *p = &a[0];
    cout << p << endl; // address of array
    cout << *p << endl;  // value at a[0]
    cout << &p << endl;  // give the address of pointer
    */

    int arr[10] = {1,3,5,77,8,9};

    // ERROR
    //arr = arr + 1;

    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;



    return 0;
}
