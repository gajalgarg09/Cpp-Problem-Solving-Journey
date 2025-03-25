#include<iostream>
using namespace std;

int countDigits(int n){

    int count = 0;
    int original = n;

    while(n > 0){

        int num = n % 10;
        if( num != 0 && original % num == 0){
            count++;
        }
        n = n / 10;
    }
    return count;
}