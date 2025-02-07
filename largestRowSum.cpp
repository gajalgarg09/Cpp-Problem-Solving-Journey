#include<iostream>
#include<climits>
using namespace std;

int largestRowSum(int arr[][3] , int row , int col){
    int max = INT_MIN;
    int rowIndex = -1;

    for(int i = 0; i<3; i++){
        int sum = 0;
        for(int j =0; j<3; j++){
            sum += arr[i][j];
        }

    if( sum > max){
        max = sum;
        rowIndex = i;
    }
}
    cout << "Maximum sum is : " << max << endl;
    return rowIndex;
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

    cout << "Max sum is at index : " << largestRowSum(arr, 3 ,3);
    return 0;
}