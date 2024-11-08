// For a given Singly Linked List of integers, sort the list using the 'Merge Sort' algorithm.

#include<iostream>
using namespace std;

class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };

node* findMid(node* head){
    if (head == NULL || head->next == NULL) return head; // Base case for mid-finding
    node* slow = head;
    node* fast = head;

    while(fast->next != NULL && fast->next->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

node* merge(node* left , node* right){
    if(left == NULL) return right;
    if(right == NULL) return left;

    node* ans = new node(-1);  // Dummy node to simplify merging
    node* temp = ans;

    // Merging 2 sorted lists
    while(left != NULL && right != NULL){
        if(left->data < right->data){
            temp->next = left;
            left = left->next;
        }
        else{
            temp->next = right;
            right = right->next;
        }
        temp = temp->next;
    }

    // Attach remaining nodes
    if(left != NULL) temp->next = left;
    if(right != NULL) temp->next = right;

    node* result = ans->next;
    delete ans;  // Clean up the dummy node
    return result;
}

node* mergeSort(node *head) {
    if(head == NULL || head->next == NULL) return head;

    // Split list into two halves
    node* mid = findMid(head);
    node* left = head;
    node* right = mid->next;
    mid->next = NULL;

    // Recursive sort on both halves
    left = mergeSort(left);
    right = mergeSort(right);

    // Merge sorted halves
    return merge(left, right);
}
