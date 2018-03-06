//
// Created by Administrator on 2018/3/6 0006.
//

#ifndef LEETCODE_REMOVEINVALIDPARENTHESES_H
#define LEETCODE_REMOVEINVALIDPARENTHESES_H


#include "../Base.h"

class RemoveInvalidParentheses: public Base {
    vector<string> remove_invalid_parentheses(string s);
    void dfs(string s, int pre_i, int pre_j, pair<char, char> par, vector<string> &out);

public:
    void run();
};


#endif //LEETCODE_REMOVEINVALIDPARENTHESES_H
