// Ninja has been given a string ‘STR’ containing either ‘{’ or ‘}’. 'STR’ is called valid if all the brackets are balanced. 
// Formally for each opening bracket, there must be a closing bracket right to it.
// For Example:
// “{}{}”, “{{}}”, “{{}{}}” are valid strings while “}{}”, “{}}{{}”, “{{}}}{“ are not valid strings.
// Ninja wants to make ‘STR’ valid by performing some operations on it. In one operation, 
// he can convert ‘{’ into ‘}’ or vice versa, and the cost of one such operation is 1.
// Your task is to help Ninja determine the minimum cost to make ‘STR’ valid.
// For Example:
// Minimum operations to make ‘STR’ =  “{{“ valid is 1.
// In one operation, we can convert ‘{’ at index ‘1’ (0-based indexing) to ‘}’. 
// The ‘STR’ now becomes "{}" which is a valid string.
// Note:
// Return -1 if it is impossible to make ‘STR’ valid.

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
