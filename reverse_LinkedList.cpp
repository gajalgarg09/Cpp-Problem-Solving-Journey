// Given the head of a singly linked list, reverse the list, and return the reversed list.

#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next; 

// CONSTRUCTOR
    Node(int data){
        this-> data = data;
        this-> next = NULL;
    }
};

// ITERATIVE SOLUTION   (APPROACH -1)
Node* reverseLinkedList(Node* head){
    if( head == NULL || head-> next == NULL){
        return head;
    }

    Node* prev = NULL;
    Node*  curr = head;
    Node* forward = NULL;

    while( curr != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr= forward;
    }
    return prev;
}



// RECURSIVE SOLUTION  (APPROACH-2)
void reverse(Node* head , Node* curr , Node* prev){

    if( curr == NULL){
        head = prev;
        return;
    }

    Node* forward = curr -> next;
    reverse( head , forward , curr);
    curr -> next = prev;

}

Node* reverseLinkedList(Node* head){

    Node* curr = head;
    Node* prev = NULL;
    reverse( head , curr , prev);
    return head;
}


// RECURSIVE SOLUTION  (APPROACH-3)

// it will return head of reverse list
Node* reverse1(Node* head){
    // base case
    if( head == NULL || head-> next == NULL){
        return head;
    }

    Node* chotaHead = reverse1( head -> next);
    head -> next -> next = head;
    head -> next = NULL;
    return chotaHead;
}

Node* reverseLinkedList(Node* head){
    return reverse1(head);
}
