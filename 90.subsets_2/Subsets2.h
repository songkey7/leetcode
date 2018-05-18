//
// Created by Qi Song on 14/05/2018.
//

#ifndef LEETCODE_SUBSETS2_H
#define LEETCODE_SUBSETS2_H


#include "../Base.h"

class Subsets2: public Base {
    vector<vector<int>> subsets_with_dup(vector<int>& nums);
    vector<vector<int>> subsets_with_dup2(vector<int>& nums);
    void dfs(vector<int>& nums, int idx, vector<int> v, vector<vector<int>> &ret);
public:
    void run();
};


#endif //LEETCODE_SUBSETS2_H
