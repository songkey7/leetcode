//
// Created by songkey on 2018/6/9.
//

#ifndef LEETCODE_BALANCEDBINARYTREE_H
#define LEETCODE_BALANCEDBINARYTREE_H


#include "../Base.h"

class BalancedBinaryTree: public Base {
    bool is_balanced(TreeNode* root);
    bool depth(TreeNode * root, int &d);
public:
    void run();
};


#endif //LEETCODE_BALANCEDBINARYTREE_H
