//
// Created by Qi Song on 1/13/18.
//

#include "PathSum.h"

bool PathSum::has_path_sum(TreeNode *root, int sum) {
    if(root == NULL) return false;
    if(root->left == NULL && root->right == NULL) return root->val == sum;
    return has_path_sum(root->left, sum - root->val) || has_path_sum(root->right, sum - root->val);
}

void PathSum::run() {
    TreeNode * root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right= new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right= new TreeNode(2);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(1);
    assert(has_path_sum(root, 22));
}
