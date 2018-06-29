//
// Created by Qi Song on 28/06/2018.
//

#ifndef LEETCODE_DIFFERENTWAYSTOADDPARENTHESES_H
#define LEETCODE_DIFFERENTWAYSTOADDPARENTHESES_H


#include "../Base.h"

class DifferentWaysToAddParentheses: public Base {
    vector<int> diff_ways_to_compute(string input);
public:
    void run();
    vector<int> helper(string input, unordered_map<string, vector<int>> & visit_map);
};


#endif //LEETCODE_DIFFERENTWAYSTOADDPARENTHESES_H
