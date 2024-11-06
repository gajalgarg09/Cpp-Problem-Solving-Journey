// Given two numbers, num1, and num2, represented by linked lists. The task is to return the head of the linked list representing the sum of these two numbers.
// For example, the number 190 will be represented by the linked list, 1->9->0->null, similarly 25 by 2->5->null. Sum of these two numbers is 190 + 25 = 215, 
// which will be represented by 2->1->5->null. You are required to return the head of the linked list 2->1->5->null.
// Note: There can be leading zeros in the input lists, but there should not be any leading zeros in the output list.

#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  private:
    Node* reverse(Node* head){
        Node* curr = head;
        Node* prev = NULL;
        Node* forward = NULL;
        
        while(curr != NULL){
            forward = curr -> next;
            curr -> next= prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    
    void insertAtTail(Node* &ansHead ,Node* &ansTail , int val){
        Node* temp = new Node(val);
        if( ansHead == NULL){
            ansHead = temp;
            ansTail = ansHead;
            return ;
        }
        else{
            ansTail -> next = temp;
            ansTail = temp;
        }
    }
    
    struct Node* add(struct Node* num1, struct Node* num2){
        int carry = 0;
        Node* ansHead = NULL;
        Node* ansTail = NULL;
        
        while(num1 != NULL || num2 != NULL || carry != 0){
            int val1 = 0;
            if( num1 != NULL)
                val1 = num1 -> data;
                
            int val2 = 0;
            if( num2 != NULL)
                val2 = num2 -> data;
                
            
            int sum = carry + val1 + val2;
            int digit = sum % 10;
            
            // create node and add in answer LL 
            insertAtTail(ansHead , ansTail , digit);
            
            carry = sum / 10;
            
            if( num1 != NULL)
                num1 = num1 -> next;
                
            if( num2 != NULL)
                num2 = num2 -> next;
        }
       return ansHead; 
    }
    
  public:
    // Function to add two numbers represented by linked list.
    Node* addTwoLists(Node* num1, Node* num2) {
     
        // Step 1 Reverse input LL
        num1 = reverse(num1);
        num2 = reverse(num2);
        
        // Step 2 Add 2 LL
        Node* ans = add(num1 , num2);
        
        // Step 3 Reverse the answer LL
        ans = reverse(ans);
        
        return ans;
        
    }
};

