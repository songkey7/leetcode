//
// Created by Qi Song on 13/06/2018.
//

#ifndef LEETCODE_TRIMABINARYSEARCHTREE_H
#define LEETCODE_TRIMABINARYSEARCHTREE_H


#include "../Base.h"

class TrimABinarySearchTree: public Base {
    TreeNode* trimBST(TreeNode* root, int L, int R);
public:
    void run();
};


#endif //LEETCODE_TRIMABINARYSEARCHTREE_H
