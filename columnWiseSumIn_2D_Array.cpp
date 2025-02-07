// Find the column wise sum of a 2D array

#include<iostream>
using namespace std;

int colSum(int arr[][3] , int row , int col){
    cout << "Column wise sum : "  << endl;
    for(int col = 0; col < 3; col++){
        int sum = 0;
        for(int row = 0; row < 3; row++){
            sum += arr[row][col];
        }
        cout << sum << " ";
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

    colSum(arr , 3, 3 );
    return 0;
}
