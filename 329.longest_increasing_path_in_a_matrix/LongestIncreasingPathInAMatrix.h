//
// Created by Qi Song on 12/04/2018.
//

#ifndef LEETCODE_LONGESTINCREASINGPATHINAMATRIX_H
#define LEETCODE_LONGESTINCREASINGPATHINAMATRIX_H


#include "../Base.h"

class LongestIncreasingPathInAMatrix: public Base {
    int longest_increasing_path(vector<vector<int>>& matrix);
    int dfs(vector<vector<int>>& matrix, int i, int j, int m, int n, int k, unordered_map<long, int> & visit_map, int cnt);
public:
    void run();
};


#endif //LEETCODE_LONGESTINCREASINGPATHINAMATRIX_H
