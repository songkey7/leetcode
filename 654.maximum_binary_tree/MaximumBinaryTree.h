//
// Created by Qi Song on 12/06/2018.
//

#ifndef LEETCODE_MAXIMUMBINARYTREE_H
#define LEETCODE_MAXIMUMBINARYTREE_H


#include "../Base.h"

class MaximumBinaryTree: public Base {
    TreeNode* construct_maximum_binary_tree(vector<int>& nums);
    TreeNode* construct_maximum_binary_tree(vector<int>& nums, int l, int r);
public:
    void run();

};


#endif //LEETCODE_MAXIMUMBINARYTREE_H
