// Given an array of integers heights representing the histogram's bar height where the width of 
// each bar is 1, return the area of the largest rectangle in the histogram.

#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> s;
        int maxArea = 0;

        for (int i = 0; i <= n; i++) {
            while (!s.empty() && (i == n || heights[s.top()] >= heights[i])) {
                int height = heights[s.top()];
                s.pop();
                int width = s.empty() ? i : i - s.top() - 1;
                maxArea = max(maxArea, height * width);
            }
            s.push(i);
        }

        return maxArea;
    }
};
