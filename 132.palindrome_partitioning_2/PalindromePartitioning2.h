//
// Created by songkey on 2018/5/31.
//

#ifndef LEETCODE_PALINDROMEPARTITIONING2_H
#define LEETCODE_PALINDROMEPARTITIONING2_H


#include "../Base.h"

class PalindromePartitioning2: public Base {
    int min_cut(string s);
public:
    void run();

    int dfs(vector<vector<bool>> &dp, int l, int r);
};


#endif //LEETCODE_PALINDROMEPARTITIONING2_H
