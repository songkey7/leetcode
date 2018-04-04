//
// Created by Qi Song on 04/04/2018.
//

#ifndef LEETCODE_SURROUNDEDREGIONS_H
#define LEETCODE_SURROUNDEDREGIONS_H


#include "../Base.h"

class SurroundedRegions: public Base {
    void solve(vector<vector<char>> &board);
    void dfs(vector<vector<char>> &board, int i, int j);
public:
    void run();
};


#endif //LEETCODE_SURROUNDEDREGIONS_H
