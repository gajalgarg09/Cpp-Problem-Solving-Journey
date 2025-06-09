#include<iostream>
#include<vector>
using namespace std;

int heightChecker(vector<int> heights){

    vector<int> v(heights);
    int count = 0;

    for(int i =0; i<heights.size(); i++){
        if(heights[i] != v[i]){
            count++;
        }
    }
    return count;
}