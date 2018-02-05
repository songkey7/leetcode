//
// Created by Qi Song on 2/5/18.
//

#ifndef LEETCODE_GENERATEPARENTHESES_H
#define LEETCODE_GENERATEPARENTHESES_H


#include "../Base.h"

class GenerateParentheses: public Base {

    vector<string> generate_parenthesis(int n);
    vector<string> generate_parenthesis(vector<string> &vec, unordered_set<string> & st);
public:
    void run();
};


#endif //LEETCODE_GENERATEPARENTHESES_H
