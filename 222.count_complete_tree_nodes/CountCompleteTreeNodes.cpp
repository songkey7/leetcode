//
// Created by Qi Song on 16/07/2018.
//

#include "CountCompleteTreeNodes.h"

int CountCompleteTreeNodes::count_nodes(TreeNode *root) {
    int h = height(root);
    if(h < 0) return 0;
    else if(h - 1 == height(root->right))
        return (1 << h) + count_nodes(root->right);
    else
        return (1 << (h - 1)) + count_nodes(root->left);
}

int CountCompleteTreeNodes::height(TreeNode *root) {
    return root ? 1 + height(root->left) : -1;
}

void CountCompleteTreeNodes::run() {
    TreeNode * root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->left->left->left = new TreeNode(8);
    assert(count_nodes(root) == 8);
}
