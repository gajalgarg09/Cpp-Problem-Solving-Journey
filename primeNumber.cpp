// Check whether the given number is Prime or not.

#include<iostream>
using namespace std;

bool isPrime(int n){

    if( n <= 1){
        return false;
    }
    
    for(int i =2; i<n; i++){
        if( n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n; 
    cout << "Enter the number to be checked : " << endl;
    cin >> n;

    if(isPrime(n)){
        cout << "The number is prime";
    }
    else{
        cout << "The number is not prime" << endl;
    }
}

