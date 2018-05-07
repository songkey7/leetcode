//
// Created by Qi Song on 09/03/2018.
//

#ifndef LEETCODE_COMBINATIONSUM_H
#define LEETCODE_COMBINATIONSUM_H


#include "../Base.h"

class CombinationSum: public Base {
    vector<vector<int>> combination_sum(vector<int>& candidates, int target);
    void dfs(vector<int> candidates, int i, vector<int> out, int target, vector<vector<int>> &ret);
    void combination_sum(vector<int>& candidates, int idx, int sum, int target, vector<int>& out, vector<vector<int>> & ret);
public:
    void run();

};


#endif //LEETCODE_COMBINATIONSUM_H
