// You are given a linked list of 'n' nodes and an integer 'k', where 'k' is less than or equal to 'n'.
// Your task is to reverse the order of each group of 'k' consecutive nodes, if 'n' is not divisible by 'k', then the last group of nodes should remain unchanged.

// For example, if the linked list is 1->2->3->4->5, and 'k' is 3, we have to reverse the first three elements, 
// and leave the last two elements unchanged. Thus, the final linked list being 3->2->1->4->5.

// Implement a function that performs this reversal, and returns the head of the modified linked list.

// Example:
// Input: 'list' = [1, 2, 3, 4], 'k' = 2
// Output: 2 1 4 3

#include<iostream>
using namespace std;

//Definition for singly-linked list.
class Node {
public:
    int data;
    Node *next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
};
 
int getLength(Node *temp){
    int cnt=0;
    while(temp != NULL){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

Node* kReverse(Node* head, int k) {
    int n = getLength(head);   //to get remaining nodes

    //Base case
    if(head==NULL){
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *next = NULL;

    int cnt =0;

    while(curr != NULL && cnt<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }

//n-k? k is done to find whether remaining nodes are to reversed or not

    if(next !=NULL && n-k>=k){    
        head->next = kReverse(next,k);  //calls recursive function 
    }
    else{
        head->next= curr;
    }

    return prev;
}
