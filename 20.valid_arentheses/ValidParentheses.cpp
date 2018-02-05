//
// Created by Qi Song on 2/5/18.
//

#include "ValidParentheses.h"

bool ValidParentheses::is_valid(string s) {
    stack<char> st;
    for(auto c: s){
        bool e = (c == ')' || c == ']' || c == '}');
        if(st.empty() && e){
            return false;
        }
        else if(!st.empty() && e){
            if(st.top() != c){
                return false;
            }
            st.pop();
        }
        else{
            if(c == '(') st.push(')');
            else if(c == '[') st.push(']');
            else if(c == '{') st.push('}');
        }
    }
    return st.empty();
}

void ValidParentheses::run() {
    string s1 = "()[]{}";
    assert(is_valid(s1));

    string s2 = "([)]";
    assert(!is_valid(s2));
}
