// You are given a special linked list where each node has a next pointer pointing to its next node.
// You are also given some random pointers, where you will be given some pairs denoting two nodes a and b i.e.
// a->random = b (random is a pointer to a random node).
// Construct a copy of the given list. The copy should consist of the same number of new nodes, 
// where each new node has its value set to the value of its corresponding original node.
// Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the original
// and copied list pointers represent the same list state. None of the pointers in the new list should point to nodes in the original list.
// For example, if there are two nodes x and y in the original list, where x->random = y, then for the corresponding two nodes
// xnew and ynew in the copied list, xnew->random = ynew.
// Return the head of the copied linked list.
// NOTE : 
// 1. If there is any node whose arbitrary pointer is not given then it's by default NULL. 
// 2. Don't make any changes to the original linked list.

#include<iostream>
#include<unordered_map>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
}

// APPROACH - 1
class Solution {
  private:
    void insertAtTail(Node* &head , Node* &tail , int d){
        Node* newNode = new Node(d);
        if( head == NULL){
            head = newNode;
            tail = newNode;
            return ;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }
    
  public:
    Node *copyList(Node *head) {
        // Step -1 create a clone list
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        while( temp != NULL){
            insertAtTail(cloneHead , cloneTail , temp -> data);
            temp = temp -> next;
        }
        
        // Step 2 Create a map
        unordered_map<Node* , Node*> oldToNew;
        
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        while(originalNode != NULL && cloneNode != NULL){
            oldToNew[originalNode] = cloneNode;
            originalNode = originalNode -> next;
            cloneNode = cloneNode -> next;
        }
        
        originalNode = head;
        cloneNode = cloneHead;
        
        while (originalNode != NULL) {
            if (originalNode->random != NULL) {
                cloneNode->random = oldToNew[originalNode->random];
            } else {
                cloneNode->random = NULL;
            }
            originalNode = originalNode->next;
            cloneNode = cloneNode->next;
        }
        return cloneHead;
        
    }
};


// APPROACH - 2
class Solution
{
   private:
    void insertAtTail(Node* &head, Node* &tail, int d) {
        Node* newNode = new Node(d);
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail -> next = newNode;
            tail = newNode;
        }
    }

    public:
    Node *copyList(Node *head)
    {
        //step 1: Create a Clone List
        Node* cloneHead = NULL;
        Node* cloneTail = NULL;
        
        Node* temp = head;
        while(temp != NULL) {
            insertAtTail(cloneHead, cloneTail, temp->data);
            temp = temp -> next;
        }
        
        // step 2: insert nodes of Clone List in between originalList
        
        Node* originalNode = head;
        Node* cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL) {
            Node* next = originalNode -> next;
            originalNode -> next = cloneNode;
            originalNode = next;
            
            next = cloneNode -> next;
            cloneNode -> next = originalNode;
            cloneNode  = next;
        }
        
        // step 3: Random pointer copy
        originalNode = head;
        cloneNode = cloneHead;
        
        while(originalNode != NULL && cloneNode != NULL) { 
            
            if(originalNode -> random != NULL) {
                cloneNode -> random = originalNode -> random -> next;
            }
            else
            {
                cloneNode -> random  = NULL;
            }
            
            cloneNode = cloneNode -> next;
            originalNode = originalNode -> next;
        }
        
        //step 4: revert step 2 changes
        Node* original = head;
        Node* copy = cloneHead;
        
         while (original && copy)
            {
                original->next =
                 original->next? original->next->next : original->next;
         
                copy->next = copy->next?copy->next->next:copy->next;
                original = original->next;
                copy = copy->next;
            }

        // step 5 answer return
        return cloneHead;
    }
};