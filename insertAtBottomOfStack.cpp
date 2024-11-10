// You are given a stack/deque of integers 'MY-STACK' and an integer ‘X’. 
// Your task is to insert ‘X’ to the bottom of ‘MY-STACK’ and return the updated stack/deque.

#include<iostream>
#include<stack>
using namespace std;

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{ 
    if( myStack.empty()){
        myStack.push(x);
        return myStack;
    }

    
    int num = myStack.top();
    myStack.pop();
        
    pushAtBottom(myStack, x);

    myStack.push(num);

    return myStack;
}