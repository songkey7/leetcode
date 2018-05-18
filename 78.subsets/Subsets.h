//
// Created by Qi Song on 19/03/2018.
//

#ifndef LEETCODE_SUBSETS_H
#define LEETCODE_SUBSETS_H


#include "../Base.h"

class Subsets: public Base {
    vector<vector<int>> subsets(vector<int>& nums);
    vector<vector<int>> subsets2(vector<int>& nums);
    void dfs(vector<int> &nums, vector<int> v, int i, vector<vector<int>> & out);
public:
    void run();

};


#endif //LEETCODE_SUBSETS_H
