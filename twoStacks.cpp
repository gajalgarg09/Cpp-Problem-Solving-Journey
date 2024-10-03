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

