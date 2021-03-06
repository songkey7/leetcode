//
// Created by Qi Song on 1/13/18.
//

#ifndef LEETCODE_PATHSUM_2_H
#define LEETCODE_PATHSUM_2_H


#include "../Base.h"

class PathSum2: public Base {
    vector<vector<int>> path_sum(TreeNode* root, int sum);
    void path_sum(TreeNode* root, int sum, vector<int> &path, vector<vector<int>> & paths);
public:
    void run();
};


#endif //LEETCODE_PATHSUM_2_H
