//
// Created by Qi Song on 1/13/18.
//

#ifndef LEETCODE_PATHSUM_3_H
#define LEETCODE_PATHSUM_3_H


#include "../Base.h"

class PathSum3: public Base {
    int path_sum(TreeNode* root, int sum);
    int path_sum(TreeNode* root, int pre, int sum);

public:
    void run();
};


#endif //LEETCODE_PATHSUM_3_H
