//
// Created by Qi Song on 2/5/18.
//

#include "ValidParentheses.h"

bool ValidParentheses::is_valid(string s) {
    stack<char> st;
    for(auto c: s){
        switch(c){
            case '(' : st.push(')');
                break;
            case '[' : st.push(']');
                break;
            case '{' : st.push('}');
                break;
            default: {
                if(st.empty() || st.top() != c) return false;
                st.pop();
                break;
            }
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
