#include<iostream>
using namespace std;

int printSum(int arr[][3] , int row, int col){
    for(int i = 0; i<3; i++){
        int sum = 0;
        for(int j =0; j<3; j++){
            sum += arr[i][j];
        }
        cout << sum <<" ";
    }
    cout << endl;
}

int main(){
    int arr[3][3];

    cout << "Enter the elements of Array :" << endl;
    for(int i =0; i<3; i++){
        for(int j = 0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Printing the Array : " << endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout <<  arr[i][j];
        }
        cout << endl;
    }

    printSum(arr , 3, 3 );
    return 0;
}