#include<iostream>
using namespace std;

class Queue{
    public:
        int *arr;
        int qfront;
        int rear;
        int size;

    Queue(int data){
        size = 50;
        arr = new int[size];
        rear = 0;
        qfront = 0;
    }

    void push(int element){
        if(rear == size){
            cout <<"Queue is full" << endl;
        }
        else{
            arr[rear] = element;
            rear++;  
        }
    }

    int pop(){
        if(qfront == rear){
            return -1;  
        }
        else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){ // if queue becomes empty after popping
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    bool isEmpty(){
        if(qfront == rear){
            return true;
        }
        return false;
    }

    int front(){
        if(qfront == rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
};

