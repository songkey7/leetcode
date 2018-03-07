//
// Created by Qi Song on 2/28/18.
//

#ifndef LEETCODE_MAXIMUMDEPTHOFBINARYTREE_H
#define LEETCODE_MAXIMUMDEPTHOFBINARYTREE_H


#include "../Base.h"

class MaximumDepthOfBinaryTree: public Base {
    int max_depth(TreeNode* root);
    int max_depth(TreeNode* root, int depth);
public:
    void run();

};


#endif //LEETCODE_MAXIMUMDEPTHOFBINARYTREE_H
