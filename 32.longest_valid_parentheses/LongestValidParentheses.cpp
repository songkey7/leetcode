//
// Created by Qi Song on 2/5/18.
//

#include "LongestValidParentheses.h"

int LongestValidParentheses::longest_valid_parentheses(string s) {
    size_t n = s.length();
    stack<pair<int, int>> st;
    vector<bool> match(n, false);
    int ret = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == ')'){
            if(!st.empty()){
                match[i] = true;
                match[st.top().second] = true;
                st.pop();
            }
        }
        else{
            st.emplace(')', i);
        }
    }
    int cnt = 0;
    for(auto b: match){
        if(b) cnt ++;
        else cnt = 0;
        ret = max(ret, cnt);
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
