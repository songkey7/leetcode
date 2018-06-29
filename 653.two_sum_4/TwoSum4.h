//
// Created by Qi Song on 29/06/2018.
//

#ifndef LEETCODE_TWOSUM4_H
#define LEETCODE_TWOSUM4_H


#include "../Base.h"

class TwoSum4: public Base {
    bool find_target(TreeNode* root, int k);
public:
    void run();

    bool find_target(TreeNode *p, TreeNode *root, bool flag, int k);
};


#endif //LEETCODE_TWOSUM4_H
