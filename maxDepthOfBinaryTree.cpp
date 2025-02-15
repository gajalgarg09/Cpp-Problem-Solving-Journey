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

int maxdepth(TreeNode* root){
    return depth(root);
}

int depth(TreeNode* root){

    if(root == NULL){
        return 0;
    }
    return max(depth(root -> left) , depth(root -> right)) + 1;
}