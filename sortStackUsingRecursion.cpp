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