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