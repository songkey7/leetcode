//
// Created by Qi Song on 2/27/18.
//

#include "BinaryTreeInorderTraversal.h"

vector<int> BinaryTreeInorderTraversal::inorder_traversal(BinaryTreeInorderTraversal::TreeNode *root) {
    vector<int> ret;
    inorder_traversal(root, ret);
    return ret;
}

void BinaryTreeInorderTraversal::inorder_traversal(BinaryTreeInorderTraversal::TreeNode *root, vector<int> &out) {
    if(!root) return;
    inorder_traversal(root->left, out);
    out.push_back(root->val);
    inorder_traversal(root->right, out);
}

void BinaryTreeInorderTraversal::run() {
    TreeNode * root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> ret = {1,3,2};
    assert(inorder_traversal(root) == ret);
}

