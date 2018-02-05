//
// Created by Qi Song on 2/5/18.
//

#include "GenerateParentheses.h"

vector<string> GenerateParentheses::generate_parenthesis(int n) {
    if(n == 0) return vector<string>();

    unordered_set<string> st;
    st.insert("()");
    vector<string> ret = {"()"};
    for(int i = 1; i < n; ++i){
        ret = generate_parenthesis(ret, st);
    }
    return ret;
}

vector<string> GenerateParentheses::generate_parenthesis(vector<string> & vec, unordered_set<string> &st) {
    vector<string> ret;
    for(auto v: vec){
        for(size_t i = 0; i <= v.length(); i++){
            string r = v.substr(0, i) + "()" + v.substr(i, v.length() - i);
            if(st.find(r) == st.end()) {
                st.insert(r);
                ret.push_back(r);
            }
        }
    }
    return ret;
}

void GenerateParentheses::run() {
    auto ret = generate_parenthesis(3);
    for(auto r: ret){
        cout << r << endl;
    }
}

