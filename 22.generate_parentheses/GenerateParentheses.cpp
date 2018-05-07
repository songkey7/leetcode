//
// Created by Qi Song on 2/5/18.
//

#include "GenerateParentheses.h"

vector<string> GenerateParentheses::generate_parenthesis(int n) {
    vector<string> ret;
    //dfs("", 0, n, ret);
    dfs2("", n, n, ret);
    return ret;
}

void GenerateParentheses::dfs(string s, int i, int n, vector<string> &ret){
    if(i == n){
        int cnt = 0, j = 0;
        for (; j < s.length() && cnt >= 0; ++j) {
            if(s[j] == '(') cnt++;
            else cnt--;
        }
        if(j == s.length() && cnt == 0) ret.push_back(s);
    }else{
        dfs(s + "((", i + 1, n, ret);
        dfs(s + "()", i + 1, n, ret);
        dfs(s + ")(", i + 1, n, ret);
        dfs(s + "))", i + 1, n, ret);
    }
}

void GenerateParentheses::dfs2(string s, int n, int m, vector<string> &ret)
{
    if(n>0)
        dfs2(s+'(', n-1, m, ret);
    if(m>0 && m>n)
        dfs2(s+')', n, m-1, ret);
    if(m==0 && n==0)
        ret.push_back(s);
}

void GenerateParentheses::run() {
    auto ret = generate_parenthesis(3);
    for(auto r: ret) cout << r << endl;
}

