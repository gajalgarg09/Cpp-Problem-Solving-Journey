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
