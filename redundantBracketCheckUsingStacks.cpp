// Given valid mathematical expressions in the form of a string. You are supposed to return true if the given expression contains a pair of redundant brackets, else return false.
// The given string only contains ‘(‘, ’)’, ‘+’, ‘-’, ‘*’, ‘/’ and lowercase English letters.

// Note :
// A pair of brackets is said to be redundant when a subexpression is surrounded by needless/ useless brackets.

// For Example :
// ((a+b)) has a pair of redundant brackets. The pair of brackets on the first and last index is needless. 
// While (a + (b*c)) does not have any pair of redundant brackets. 

#include<iostream>
#include<stack>
using namespace std;

bool redundantBrackets(string &s){

    stack <char> st;
    for(int i =0; i<s.length(); i++){

        char ch = s[i];

        if(s[i] == '(' || ch == '+' || ch == '-' || ch == '*' || ch =='/'){
            st.push(ch);
        }

        else{
            bool isRedundant = true;
            while(st.top() != '('){
                char top = st.top();
                if(top == '+' || top == '-' || top == '*' || top =='/'){
                    isRedundant = false;
                }
                st.pop();
            }
            if( isRedundant == true)
                return true;
            st.pop();
        }
    }
   return false; 
}
