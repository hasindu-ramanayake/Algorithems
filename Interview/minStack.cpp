
#include <bits/stdc++.h>

using namespace std;



class MinStack {
public:
    stack<int> minStack;
    stack<int> s;

    MinStack() {
        minStack.push(INT_MAX);
        while ( !s.empty()) s.pop();
    }
    
    void push(int val) {
        minStack.push( min(minStack.top(), val));
        s.push(val);
    }
    
    void pop() {
        minStack.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */