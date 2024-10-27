#include<iostream>
#include<map>
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

// APPROACH - 1 => USING MAPS   (DETECTION)
bool detectLoop(Node* head){
    if( head == NULL)
        return false;

    map<Node* , bool> visited;

    Node* temp = head;
    while( temp != NULL){

        if( visited[temp] == true)
            return true;

        visited[temp] = true;
        temp = temp -> next;
    }

    return false;

}

// APPROACH -2 => USING FLOYD'S CYCLE DETECTION ALGO    (DETECTION)
Node* floydDetectLoop(Node* head){
    if( head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while( fast != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;

        if( slow == fast)
            return slow;
    }
    return NULL;
}

// getting starting node of loop
Node* getStartingNode(Node* head){

    if( head == NULL)
        return NULL;

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;
    
    while( slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}

// LOOP REMOVAL
void removeLoop(Node* head){

    if( head == NULL)
        return ;

    Node* startLoop = getStartingNode(head);
    Node* temp = startLoop;

    while(temp -> next != startLoop){
        temp = temp -> next;
    }

    temp -> next = NULL;
    
}

int main(){

    if( detectLoop(head)){
        cout << "Cycle is present" << endl;
    }
    else{
        cout << "Cycle is not present" << endl;
    }


    if(floydDetectLoop(head)){
        cout << "Cycle is present" << endl;
    }
    else{
        cout << "Cycle is not present" << endl;
    }


    return 0;
}