#include<iostream>
#include<unordered_map>
using namespace std;


pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) {

    unordered_map<int , int> mp;
    int intersection = 0;

    for(int nums : arr1){
        mp[nums] = 1;
    }

    for(int nums : arr2){
        if(mp[nums] == 1){
            intersection++;
            mp[nums] = 0;
        }
    }

    int Union = n + m -intersection;
    return {intersection , Union};

}