//
// Created by Qi Song on 2/28/18.
//

#include "MaximumDepthOfBinaryTree.h"

int MaximumDepthOfBinaryTree::max_depth(TreeNode *root) {
    return max_depth(root, 0);
}

int MaximumDepthOfBinaryTree::max_depth(MaximumDepthOfBinaryTree::TreeNode *root, int depth) {
    if(!root) return depth;
    depth++;
    return max(max_depth(root->left, depth), max_depth(root->right, depth));
}

void MaximumDepthOfBinaryTree::run() {
    TreeNode * root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    assert(max_depth(root) == 3);
}


