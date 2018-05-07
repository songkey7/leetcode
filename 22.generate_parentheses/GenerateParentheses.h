//
// Created by Qi Song on 2/5/18.
//

#ifndef LEETCODE_GENERATEPARENTHESES_H
#define LEETCODE_GENERATEPARENTHESES_H


#include "../Base.h"

class GenerateParentheses: public Base {

    vector<string> generate_parenthesis(int n);
    void dfs(string s, int i, int n, vector<string> &ret);
    void dfs2(string s, int n, int m, vector<string> &ret);

public:
    void run();
};


#endif //LEETCODE_GENERATEPARENTHESES_H
