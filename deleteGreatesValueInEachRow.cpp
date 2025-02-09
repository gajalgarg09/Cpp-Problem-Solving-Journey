// You are given an m x n matrix grid consisting of positive integers.
// Perform the following operation until grid becomes empty:
// Delete the element with the greatest value from each row. If multiple such elements exist, delete any of them.
// Add the maximum of deleted elements to the answer.
// Note that the number of columns decreases by one after each operation.
// Return the answer after performing the operations described above.

#include<iostream>
#include<vector>
#include<limits>
#include<algorithm>
using namespace std;

int deleteGreatestValue(vector<vector<int>>& grid){

    int row = grid.size();
    int col = grid[0].size();
    int ans = 0;

    // Sorting each row
    for(int i =0; i<row; i++){
        sort(grid[i].begin() , grid[i].end());
    }

    for(int j = col-1; j>=0; j--){
        int maxVal = INT_MIN;

        for(int i =0; i<row; i++){
            maxVal = max(maxVal , grid[i][j]);
        }
        ans += maxVal;
    }
    return ans;
}
