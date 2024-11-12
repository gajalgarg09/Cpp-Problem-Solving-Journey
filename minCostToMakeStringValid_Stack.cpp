#include<iostream>
#include<stack>
using namespace std;

int findMinimumCost(string str){
    stack <char> st;
    int count = 0;

    if(str.length() % 2 != 0)
        return -1;

    for(int i =0; i<str.length(); i++){
        char ch = str[i];

        if(ch == '{')
            st.push(ch);

        else if( ch == '}' && !st.empty() && st.top() == '{'){
            st.pop();
        }

        else{
            st.push(ch);
        }
    }

    int openCount = 0 , closeCount = 0;
    while( !st.empty()){
        if(st.top() == '{')
            openCount++;
        else
            closeCount++;

        st.pop();
    }

    count = (openCount + 1)/2 + (closeCount + 1)/2;
    return count;

}