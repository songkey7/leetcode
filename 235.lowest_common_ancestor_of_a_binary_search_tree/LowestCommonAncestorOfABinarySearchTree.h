//
// Created by Qi Song on 15/06/2018.
//

#ifndef LEETCODE_LOWESTCOMMONANCESTOROFABINARYSEARCHTREE_H
#define LEETCODE_LOWESTCOMMONANCESTOROFABINARYSEARCHTREE_H


#include "../Base.h"

class LowestCommonAncestorOfABinarySearchTree: public Base {
    TreeNode* lowest_common_ancestor(TreeNode* root, TreeNode* p, TreeNode* q);
public:
    void run();
};


#endif //LEETCODE_LOWESTCOMMONANCESTOROFABINARYSEARCHTREE_H
