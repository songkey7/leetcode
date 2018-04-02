//
// Created by Qi Song on 02/04/2018.
//

#ifndef LEETCODE_CONVERTSORTEDARRAYTOBINARYSEARCHTREE_H
#define LEETCODE_CONVERTSORTEDARRAYTOBINARYSEARCHTREE_H


#include "../Base.h"

class ConvertSortedArrayToBinarySearchTree: public Base {
    TreeNode* sorted_array_to_BST(vector<int>& nums);
    TreeNode* build_tree(vector<int>& nums, int l, int r);
public:
    void run();
};


#endif //LEETCODE_CONVERTSORTEDARRAYTOBINARYSEARCHTREE_H
