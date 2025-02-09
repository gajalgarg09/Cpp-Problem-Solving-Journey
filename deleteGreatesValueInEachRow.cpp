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