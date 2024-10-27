// To check whether a Linked List is circular or not

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

// DESTRUCTOR  -> this is created for deletion here
    ~Node(){
        int value = this -> data;
        if( this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void print(Node* tail){
    Node* temp = tail;

// empty LL
    if( tail == NULL){
        cout << "List is empty" << endl;
        return ;
    }

    do{
        cout << tail -> data << " ";
        tail = tail -> next;
   }while( tail != temp);

   cout << endl;
}

void insertNode(Node* &tail , int element , int data){
// empty list
    if( tail == NULL){
        Node* newNode = new Node(data);
        tail  = newNode; 
        newNode -> next = newNode; // khudse khudko point krwa rhe
    }

    else{    // non empty list
        // assuming element is present in LL

        Node* curr = tail;
        while( curr -> data != element){
            curr = curr -> next;
        }

        // element found
        // curr is representing element wala node
        Node* temp = new Node(data);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

void deleteNode(Node* &tail , int value){

    if (tail == NULL){
        cout << "List is empty" << endl;
        return;
    }
    else{
        // non empty case
        // assuming "value" is present in the LL
        
        Node* prev = tail;
        Node* curr = prev -> next;

        while( curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next; 

        // for 1 Node LL
        if( curr == prev){
            tail = NULL;
        }

        // >=2 Node LL
        if(tail == curr){
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;
    }
}

bool isCircularList(Node* head){

    if( head == NULL)
        return true;

    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }

    if( temp == head)
        return true;

    return false;
}
