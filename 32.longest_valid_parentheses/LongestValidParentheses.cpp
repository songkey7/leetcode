//
// Created by Qi Song on 2/5/18.
//

#include "LongestValidParentheses.h"

int LongestValidParentheses::longest_valid_parentheses(string s) {
    int ret = 0;
    size_t n = s.length();
    stack<int> st;
    vector<bool> match(n, false);
    for (int i = 0; i < n; ++i) {
        if(s[i] == '('){
            st.push(i);
        }
        else if(!st.empty()){
            match[i] = true;
            match[st.top()] = true;
            st.pop();
        }
    }
    int cnt = 0;
    for (auto b: match) {
        if(b) ret = max(ret, ++cnt);
        else cnt = 0;
    }
    return ret;
}

void LongestValidParentheses::run() {
    string s1 = "(()";
    assert(longest_valid_parentheses(s1) == 2);
    string s2 = ")()())";
    assert(longest_valid_parentheses(s2) == 4);
    string s3 = "()()";
    assert(longest_valid_parentheses(s3) == 4);
}
