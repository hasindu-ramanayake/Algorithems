#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string str) {
        if (str.empty()) return true;
        std::stack <char> s;
        for ( auto c: str ) {
            if ( c == '(' || c == '{' || c == '[' ) {
                s.push(c);
            } else if ( c == ')' )  {
                if ( s.empty() || s.top() != '(' ) return false;
                else s.pop();
            } else if ( c == '}' ) {
                if (  s.empty() || s.top() != '{' ) return false;
                else s.pop();
            } else if ( c == ']' ) {
                if (  s.empty() || s.top() != '[' ) return false;
                else s.pop();
            } 
        }
        return s.empty();
    }
};