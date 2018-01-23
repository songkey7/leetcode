//
// Created by Qi Song on 1/13/18.
//

#ifndef LEETCODE_PATHSUM_H
#define LEETCODE_PATHSUM_H


#include "../Base.h"

class PathSum: public Base {
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };

    bool has_path_sum(TreeNode* root, int sum);

public:
    void run();
};


#endif //LEETCODE_PATHSUM_H
