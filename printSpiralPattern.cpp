//Given an m x n matrix, return all elements of the matrix in spiral order.

// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// 1 -> 2 -> 3 -> 6 -> 9 -> 8 -> 7 -> 4 -> 5
// Output: [1,2,3,6,9,8,7,4,5]

// O(n*m)

#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix){

    vector<int> ans;

    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row*col;

    int startCol = 0;
    int startRow = 0;
    int endCol = col -1;
    int endRow = row-1;

    while(count < total){

        // printing the first row
        for(int index = startCol; count < total &&  index <=endCol; index++){
            ans.push_back(matrix[startRow][index]);
            count++;
        }
        startRow++;

        // printing the last column
        for(int index = startRow;count < total &&  index <= endRow; index++){
            ans.push_back(matrix[index][endCol]);
            count++;
        }
        endCol--;

        // printing the last row
        for(int index = endCol ; count < total && index >= startCol; index--){
            ans.push_back(matrix[endRow][index]);
            count++;
        }
        endRow--;

        // printing the first column
        for(int index = endRow; count < total && index >= startRow; index--){
            ans.push_back(matrix[index][startCol]);
            count++;
        }
        startCol++;
    }

    return ans;
}
