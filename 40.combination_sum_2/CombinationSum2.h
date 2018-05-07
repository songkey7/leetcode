//
// Created by Qi Song on 07/05/2018.
//

#ifndef LEETCODE_COMBINATIONSUM2_H
#define LEETCODE_COMBINATIONSUM2_H


#include "../Base.h"

class CombinationSum2: public Base {
    vector<vector<int>> combination_sum_2(vector<int>& candidates, int target);
    void dfs(vector<int> &candidates, int i, vector<int> out, int target, vector<vector<int>> &ret);
public:
    void run();
};


#endif //LEETCODE_COMBINATIONSUM2_H
