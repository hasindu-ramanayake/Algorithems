
#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::stack<int> s;
        for (int i =0 ; i < tokens.size() ; i++ ) {
            if ( tokens[i] == "+" ) {
                int num1 = s.top(); s.pop();
                int num2 = s.top(); s.pop();
                s.push(num1+num2);
            }else if ( tokens[i] == "-" ) {
                int num1 = s.top(); s.pop();
                int num2 = s.top(); s.pop();
                s.push(num2- num1);
            } else if ( tokens[i] == "*" ) {
                int num1 = s.top(); s.pop();
                int num2 = s.top(); s.pop();
                s.push(num1*num2);
            } else if ( tokens[i] == "/" ) {
                int num1 = s.top(); s.pop();
                int num2 = s.top(); s.pop();
                s.push( num2/num1);
            } else {
                s.push( stoi(tokens[i]) );
            }
        }
        return s.top();
    }
};