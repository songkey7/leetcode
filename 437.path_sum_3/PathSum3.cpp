//
// Created by Qi Song on 1/13/18.
//

#include "PathSum3.h"

int PathSum3::path_sum(TreeNode *root, int sum) {
    if(!root) return 0;
    return path_sum(root, 0, sum) + path_sum(root->left, sum) + path_sum(root->right, sum);
}

int PathSum3::path_sum(TreeNode *root, int pre, int sum) {
    if(!root) return 0;
    int cur = pre + root->val;
    return (cur == sum ? 1 : 0) + path_sum(root->left, cur, sum) + path_sum(root->right, cur, sum);
}

void PathSum3::run() {
    TreeNode * root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right= new TreeNode(-3);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(2);
    root->left->left->left = new TreeNode(3);
    root->left->left->right= new TreeNode(-2);
    root->left->right->right = new TreeNode(1);
    root->right->right = new TreeNode(11);
    int ret = path_sum(root, 8);
    assert(path_sum(root, 8) == 3);
}


