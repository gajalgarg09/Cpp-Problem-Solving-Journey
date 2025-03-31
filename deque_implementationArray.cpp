// Design a data structure to implement deque of size ‘N’. It should support the following operations:
// pushFront(X): Inserts an element X in the front of the deque. Returns true if the element is inserted, otherwise false.
// pushRear(X): Inserts an element X in the back of the deque. Returns true if the element is inserted, otherwise false.
// popFront(): Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
// popRear(): Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
// getFront(): Returns the first element of the deque. If the deque is empty, it returns -1.
// getRear(): Returns the last element of the deque. If the deque is empty, it returns -1.
// isEmpty(): Returns true if the deque is empty, otherwise false.
// isFull(): Returns true if the deque is full, otherwise false.


#include<iostream>
using namespace std;

class Deque
{
    int *arr;
    int front;
    int rear;
    int size;
public:
   
    Deque(int n)
    {
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    bool pushFront(int x)
    {
        if(isFull()){
            return false;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(front == 0 && rear != size-1){
            front = size-1;
        }
        else{
            front--;
        }
        arr[front] = x;
        return true;
    }

    bool pushRear(int x)
    {
        if(isFull()){
            return false;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;
        }
        else{
            rear++;
        }

        arr[rear] = x;
        return true;
    }

    int popFront()
    {
        if(isEmpty()){
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if(front == rear){
            front = rear = -1;
        }
        else if(front == size-1){
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }

    int popRear()
    {
        if(isEmpty()){
            return -1;
        }

        int ans = arr[rear];
        arr[rear] = -1;

        if(front == rear){
            front = rear = -1;
        }
        else if(rear == 0){
            rear = size -1;
        }
        else{
            rear--;
        }
        return ans;
    }

    int getFront()
    {
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }

    int getRear()
    {
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty()
    {
        if(front == -1){
            return true;
        }
        return false;
    }

    bool isFull()
    {
        if((front == 0 && rear == size-1) || ((front != 0) && rear == (front-1)%(size-1))){
            return true;
        }
        return false;
    }
};
