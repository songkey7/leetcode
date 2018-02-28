//
// Created by Qi Song on 2/27/18.
//

#ifndef LEETCODE_VALIDATEBINARYSEARCHTREE_H
#define LEETCODE_VALIDATEBINARYSEARCHTREE_H


#include "../Base.h"

class ValidateBinarySearchTree: public Base {

    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };

    bool is_valid_BST(TreeNode* root);
    bool is_valid_BST2(TreeNode* root);
    bool is_valid_BST(TreeNode* root, long &pre);
public:
    void run();
};


#endif //LEETCODE_VALIDATEBINARYSEARCHTREE_H
