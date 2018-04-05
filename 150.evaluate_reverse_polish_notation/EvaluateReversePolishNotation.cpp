//
// Created by Qi Song on 05/04/2018.
//

#include "EvaluateReversePolishNotation.h"

int EvaluateReversePolishNotation::evalRPN(vector<string> &tokens) {
    stack<int> st;
    for(int i = 0; i < tokens.size(); i++){
        if(tokens[i] == "+"){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push(b + a);
        }
        else if(tokens[i] == "-"){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push(b - a);
        }
        else if(tokens[i] == "*"){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push(b * a);
        }
        else if(tokens[i] == "/"){
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            st.push(b / a);
        } else{
            st.push(stoi(tokens[i]));
        }
    }
    return st.top();
}

void EvaluateReversePolishNotation::run() {
    vector<string> token1 = {"2", "1", "+", "3", "*"};
    assert(evalRPN(token1) == 9);
    vector<string> token2 = {"4", "13", "5", "/", "+"};
    assert(evalRPN(token2) == 6);
}


