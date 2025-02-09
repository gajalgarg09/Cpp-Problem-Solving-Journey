// Given a square matrix mat, return the sum of the matrix diagonals.
// Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.

#include<iostream>
#include<vector>
using namespace std;

int diagonalSum(vector<vector<int>>& mat) {
    int n = mat.size();
    int ans = 0;
    
    for(int i =0; i<n; i++){
        ans += mat[i][i];

        if(i != n-1-i){
            ans += mat[i][n-1-i];
        }
    }
    return ans;
}
