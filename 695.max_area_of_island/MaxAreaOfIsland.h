//
// Created by songkey on 2018/6/9.
//

#ifndef LEETCODE_MAXAREAOFISLAND_H
#define LEETCODE_MAXAREAOFISLAND_H


#include "../Base.h"

class MaxAreaOfIsland: public Base {
    int max_area_of_island(vector<vector<int>>& grid);
public:
    void run();

    void dfs(vector<vector<int>> &grid, size_t m, size_t n, int i, int j, int &cnt, int &ret);
};


#endif //LEETCODE_MAXAREAOFISLAND_H
