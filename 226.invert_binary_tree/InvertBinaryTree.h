//
// Created by Qi Song on 2/27/18.
//

#ifndef LEETCODE_INVERTBINARYTREE_H
#define LEETCODE_INVERTBINARYTREE_H


#include "../Base.h"

class InvertBinaryTree: public Base {
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };

    TreeNode* invert_tree(TreeNode* root);
    bool equal(TreeNode* r1, TreeNode *r2);
public:
    void run();

};


#endif //LEETCODE_INVERTBINARYTREE_H
