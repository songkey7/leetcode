//
// Created by Qi Song on 2/7/18.
//

#ifndef LEETCODE_CONSTRUCTBINARYTREEFROMPREORDERANDINORDERTRAVERSAL_H
#define LEETCODE_CONSTRUCTBINARYTREEFROMPREORDERANDINORDERTRAVERSAL_H


#include "../Base.h"

class ConstructBinaryTreeFromPreorderAndInorderTraversal: public Base {
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };
    TreeNode* build_tree(vector<int>& preorder, vector<int>& inorder);
    TreeNode* build_tree(vector<int>& preorder, vector<int>& inorder, int pre_i, int in_l, int in_r);
    bool equal(TreeNode * root1, TreeNode * root2);
public:
    void run();

    TreeNode *build_tree(vector<int> &preorder, vector<int> &inorder, int pre_i, int in_idx);
};


#endif //LEETCODE_CONSTRUCTBINARYTREEFROMPREORDERANDINORDERTRAVERSAL_H
