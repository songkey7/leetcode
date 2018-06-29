//
// Created by Qi Song on 25/06/2018.
//

#ifndef LEETCODE_PERMUTATIONS2_H
#define LEETCODE_PERMUTATIONS2_H


#include "../Base.h"

class Permutations2: public Base {
    vector<vector<int>> permute_unique(vector<int> &nums);
public:
    void run();

    void dfs(vector<int> &nums, int n, int len, vector<bool> &visit, vector<int> out, vector<vector<int>> &ret);
};


#endif //LEETCODE_PERMUTATIONS2_H
