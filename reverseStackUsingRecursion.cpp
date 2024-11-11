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