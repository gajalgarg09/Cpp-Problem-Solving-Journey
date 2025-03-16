#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        vector<int> mergeArrays(vector<int> &nums1 , vector<int> &nums2){
            int n1 = nums1.size();
            int n2 = nums2.size();
            vector<int> merged;
    
            int i = 0 , j = 0;
            while(i < n1 && j < n2){
                if(nums1[i] < nums2[j]){
                    merged.push_back(nums1[i++]);
                }
                else{
                    merged.push_back(nums2[j++]);
                }
            }
            while( i < n1) merged.push_back(nums1[i++]);
            while( j < n2) merged.push_back(nums2[j++]);
    
            return merged;
        }
        
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            vector<int> merged = mergeArrays(nums1 , nums2);
            int n = merged.size();
    
            if( n % 2 != 0){
                return merged[n/2];
            }
            else{
                return (merged[n / 2 - 1] + merged[n / 2]) / 2.0;
            } 
        }
    };