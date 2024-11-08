// You are given a linked list containing 'n' 'head' nodes, where every node in the linked list contains two pointers:
// (1) ‘next’ which points to the next node in the list
// (2) ‘child’ pointer to a linked list where the current node is the head.
// Each of these child linked lists is in sorted order and connected by 'child' pointer.
// Your task is to flatten this linked such that all nodes appear in a single layer or level in a 'sorted order'.

#include<iostream>
using namespace std;

class Node {
 public:
	int data;
	Node *next;
 	Node *child;
	Node() : data(0), next(nullptr), child(nullptr){};
	Node(int x) : data(x), next(nullptr), child(nullptr) {}
	Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
};
 

Node* merge(Node* down,Node* right){

    if(down==NULL){
        return right;
    }

    if(right==NULL){
        return down;
    }

    Node* ans = new Node(-1);
    Node* temp = ans;
    while(down!=NULL&& right!=NULL){
        if(down->data<right->data){

            temp->child = down;
            temp = down;
            down = down->child;
        }

        else{
            temp->child = right;
            temp = right;
            right = right->child;
        }
    }

    while(down!=NULL){
        temp->child = down;
        temp = down;
        down = down->child;
    }

    while(right!=NULL){
        temp->child = right;
        temp = right;
        right = right->child;
    }

    ans = ans->child;
    return ans;

}

Node* flattenLinkedList(Node* head) 
{
    if(head==NULL||head->next==NULL){
        return head;
    }

    Node* down = head;
    // down->next = NULL;
    Node* right  = flattenLinkedList(head->next);
    down->next = NULL;
    return merge(down,right);

}
