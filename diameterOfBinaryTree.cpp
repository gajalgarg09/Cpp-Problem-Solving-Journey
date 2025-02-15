#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
    public:
        int maxD = 0;
        int height(TreeNode* root){
            if( root == NULL)
                return 0;
    
            int  l = height(root -> left);
            int  r = height(root -> right);
            maxD = max(maxD , l+r);
    
            return max(l,r) + 1;
        }
    
        int diameterOfBinaryTree(TreeNode* root) {
            height(root);
            return maxD;
        }
    };