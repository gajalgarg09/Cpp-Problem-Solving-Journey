#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};


class Solution {
  private: 
    void func(Node* root , vector<int>&v , unordered_map<int , int> &m , int level){
        if( root == NULL){
            return ;
        }
        if(m.find(level) == m.end()){
            m[level]++;
            v.push_back(root -> data);
        }
        func(root -> left , v , m , level+1);
        func(root -> right , v , m , level+1);
    }
    
  public:
    vector<int> leftView(Node *root) {
        vector<int> vec;
        unordered_map<int, int> m;
        func(root, vec, m, 1);
        return vec;
    }
};