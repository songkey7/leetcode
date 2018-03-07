//
// Created by Qi Song on 07/03/2018.
//

#include "ConvertBSTToGreaterTree.h"

Base::TreeNode *ConvertBSTToGreaterTree::convertBST(Base::TreeNode *root) {
    int sum = 0;
    convertBST(root, sum);
    return root;
}

void ConvertBSTToGreaterTree::convertBST(Base::TreeNode *root, int &sum) {
    if(!root) return;
    convertBST(root->right, sum);
    sum += root->val;
    root->val = sum;
    convertBST(root->left, sum);
}

void ConvertBSTToGreaterTree::run() {
    TreeNode * root = new TreeNode(5);
    root->left = new TreeNode(2);
    root->right = new TreeNode(13);
    TreeNode * ret = new TreeNode(18);
    ret->left = new TreeNode(20);
    ret->right = new TreeNode(13);
    assert(binary_tree_equal(convertBST(root), ret));
}


