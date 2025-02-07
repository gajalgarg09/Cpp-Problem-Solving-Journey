#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>ans;
    for(int col =0; col < mCols; col++){
        // even index
        if(col%2 ==0){
            for(int row = 0; row < nRows; row++){
                ans.push_back(arr[row][col]);
            }
        }
        // odd index
        else{
            for(int row = nRows-1; row>=0; row--){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}