// You are having a stack "ARR" of size 'N+1', your task is to delete the middlemost element so that the size of resulting stack is 'N'.
// A stack is a linear data structure where both insertion and deletion of elements take place at the top. 
// It follows FILO (First In Last Out) or LIFO (Last In First Out) approaches. Books piled on top of each other is an example of a stack,
// where you can only remove a single book at a time, which is at the top of the stack. Likewise, you can only add a single book at a time, 
// on the top of the stack only.

// Example :-
// INPUT : ARR [ ] = [ 1 , 2 , 3 , 4 , 5 ] , N = 4
// OUTPUT: ARR [ ] = [ 1 , 2 , 4,  5 ]
// The above example contains an odd number of elements, hence the middle element is clearly the (N+1) / 2th element, which is removed from the stack in the output.

// INPUT : ARR [ ] = [ 5, 6, 7, 8 ] , N = 3
// OUTPUT: ARR [ ] = [ 5, 7, 8 ]
// The above example contains an even number of elements, so out of the two middle elements, we consider the one which occurs first. 
// Hence, the middle element would be ((N+1) / 2 - 1) element, which is 6 and is removed from the stack in the output.

#include <iostream> 
#include<stack>
using namespace std;

void solve(stack<int>&inputStack , int count,  int size){
    if( count == size/2){
        inputStack.pop();
        return ;
    }

    int num = inputStack.top();
    inputStack.pop();

    solve(inputStack , count+1, size);

    inputStack.push(num);
}

void deleteMiddleElement(stack<int>&inputStack , int n){
    int count = 0;
    solve(inputStack , count , n);
}
