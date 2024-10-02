// Problem Statement
// Given an array of integers arr, replace each element with its rank.
// The rank represents how large the element is. The rank has the following rules:
// Rank is an integer starting from 1.
// The larger the element, the larger the rank. If two elements are equal, their rank must be the same.
// Rank should be as small as possible.

// Solution Intuition
// we will create duplicate array
// we will sort it
// we wil use hashmap for faster lookup times
// we will start the ranking from the smallest with rank 1 and go on increasing the
// rank by one
// finally we will return the array with the values from the stored hashmap according
// to the input array order

#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        if( arr.empty())
            return {};

        vector<int> ans = arr;
        sort(ans.begin() , ans.end());

        map<int, int> mp;

        mp[ans[0]] = 1; 
        for(int i=1; i<ans.size(); i++){
            if(ans[i] > ans[i-1])
                mp[ans[i]] = mp[ans[i-1]] + 1;

            else
                mp[ans[i]] = mp[ans[i-1]];
        }

        vector<int> result;
        for( int x : arr){
            result.push_back(mp[x]);
        }
        return result;
    }
};
