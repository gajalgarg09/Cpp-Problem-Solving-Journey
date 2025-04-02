#include<iostream>
#include<stack>
#include<queue>
using namespace std;

queue<int> reverseQueue(queue<int> &q){
    stack<int> s;
    // pushing elements in the Stack
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    // pushing elements in the queue
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }

    return q;
}