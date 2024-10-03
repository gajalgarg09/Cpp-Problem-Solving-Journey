// Design a data structure, which represents two stacks using only one array common for both stacks. The data structure should support the following operations:

// push1(NUM) - Push ‘NUM’ into stack1.
// push2(NUM) - Push ‘NUM’ into stack2.
// pop1() - Pop out a top element from stack1 and return popped element, in case of underflow return -1.
// pop2() - Pop out a top element from stack2 and return popped element, in case of underflow return -1.
// There are 2 types of queries in the input

// Type 1 - These queries correspond to Push operation.
// Type 2 - These queries correspond to Pop operation.
// Note:
// 1. You are given the size of the array.
// 2. You need to perform push and pop operations in such a way that we are able to push elements in the stack until there is some empty space available in the array.
// 3. While performing Push operations, do nothing in the situation of the overflow of the stack.

#include<iostream>
using namespace std;
class TwoStack {
    int *arr;
    int top1; 
    int top2;
    int size;

public:
    // Constructor to initialize TwoStack.
    TwoStack(int s) {
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }
    
    // Push into the first stack.
    void push1(int num) {
        // Ensure there is space for insertion
        if (top2 - top1 > 1) {
            top1++;
            arr[top1] = num;
        }
    }

    // Push into the second stack.
    void push2(int num) {
        if (top2 - top1 > 1) {
            top2--;
            arr[top2] = num;
        }
    }

    // Pop from the first stack.
    int pop1() {
        if (top1 >= 0) {
            int ans = arr[top1];
            top1--;
            return ans;
        } else {
            return -1;  // Return -1 if the stack is empty.
        }
    }

    // Pop from the second stack.
    int pop2() {
        if (top2 < size) {
            int ans = arr[top2];
            top2++;
            return ans;
        } else {
            return -1;  // Return -1 if the stack is empty.
        }
    }
};

