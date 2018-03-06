//
// Created by Administrator on 2018/3/6 0006.
//

#include "RemoveInvalidParentheses.h"

void RemoveInvalidParentheses::dfs(string s, int pre_i, int pre_j, pair<char, char> par, vector<string> &out) {
    for (int i = pre_i, stack = 0; i < s.length(); i++) {
        if (s[i] == par.first) stack++;
        if (s[i] == par.second) stack--;
        if (stack >= 0) continue;
        for (int j = pre_j; j <= i; j++) {
            if (s[j] == par.second && (j == pre_j || s[j - 1] != par.second))
                dfs(s.substr(0, j) + s.substr(j + 1, s.length()), i, j, par, out);
        }
        return;
    }
    reverse(s.begin(), s.end());
    if (par.first == '(')
        dfs(s, 0, 0, {')', '('}, out);
    else
        out.push_back(s);
}

vector<string> RemoveInvalidParentheses::remove_invalid_parentheses(string s) {
    vector<string> ret;
    dfs(s, 0, 0, {'(', ')'}, ret);
    return ret;
}

void RemoveInvalidParentheses::run() {
    //vector<string> ret = {"()()"};
    //assert(remove_invalid_parentheses("()(()((") == ret);
    vector<string> ret1 = {"(())()", "()()()"};
    assert(remove_invalid_parentheses("()())()") == ret1);
    //vector<string> ret2 = {"(a)()()", "(a())()"};
    //assert(remove_invalid_parentheses("(a)())()") == ret2);
}

