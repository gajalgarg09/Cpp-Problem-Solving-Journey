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