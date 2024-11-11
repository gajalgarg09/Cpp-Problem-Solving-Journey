// You’re given a stack consisting of 'N' integers. Your task is to sort this stack in descending order using recursion.
// We can only use the following functions on this stack S.
// is_empty(S) : Tests whether stack is empty or not.
// push(S) : Adds a new element to the stack.
// pop(S) : Removes top element from the stack.
// top(S) : Returns value of the top element. Note that this function does not remove elements from the stack.
// Note :
// 1) Use of any loop constructs like while, for..etc is not allowed. 
// 2) The stack may contain duplicate integers.
// 3) The stack may contain any integer i.e it may either be negative, positive or zero.

#include<iostream>
#include<stack>
using namespace std;

void sortInsert(stack <int> s , int num){
    if(s.empty() || (!s.empty() && s.top() < num)){
        s.push(num);
        return ;
    }

    int n = s.top();
    s.pop();

    sortInsert(s, num);

    s.push(n);
}

void sort(stack<int> st){

    if(st.empty()){
        return ;
    }

    int num = st.top();
    st.pop();

    sortInsert(st , num);

    st.push(num);

}
