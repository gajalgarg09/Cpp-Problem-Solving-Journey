// Reverse a given stack of 'N' integers using recursion. You are required to make changes in the input parameter itself.
// Note: You are not allowed to use any extra space other than the internal stack space used due to recursion.

#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int x){

    if(s.empty()){
        s.push(x);
        return ;
    }

    int num = s.top();
    s.pop();

    insertAtBottom(s , x);

    s.push(num);
}

void reverseStack(stack<int> &st){

    if(st.empty())
        return ;

    int num = st.top();
    st.pop();

    reverseStack(st);

    insertAtBottom(st, num);

}
