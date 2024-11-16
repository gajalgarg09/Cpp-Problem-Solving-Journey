// Given a string s containing only three types of characters: '(', ')' and '*', return true if s is valid.
// The following rules define a valid string:
// Any left parenthesis '(' must have a corresponding right parenthesis ')'.
// Any right parenthesis ')' must have a corresponding left parenthesis '('.
// Left parenthesis '(' must go before the corresponding right parenthesis ')'.
// '*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string "".

#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
        stack<int> open, star; 

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            if (ch == '(')
                open.push(i); 
            else if (ch == '*')
                star.push(i); 
            else { 
                if (!open.empty())
                    open.pop(); 
                else if (!star.empty())
                    star.pop(); 
                else
                    return false; 
            }
        }

        
        while (!open.empty() && !star.empty()) {
            if (open.top() > star.top()) 
                return false;
            open.pop();
            star.pop();
        }

        return open.empty(); 
    }
};
