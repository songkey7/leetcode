//
// Created by Qi Song on 07/03/2018.
//

#include "DiameterOfBinaryTree.h"

int DiameterOfBinaryTree::diameter_of_binary_tree(DiameterOfBinaryTree::TreeNode *root) {
    if(!root) return 0;
    int ret = 0;
    depth(root, ret);
    return ret - 1;
}

int DiameterOfBinaryTree::depth(TreeNode * root, int &out) {
    if(!root) return 0;
    int l = depth(root->left, out);
    int r = depth(root->right, out);
    out = max(out, l + r + 1);
    return max(l, r) + 1;
}

void DiameterOfBinaryTree::run() {
    TreeNode * root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    assert(diameter_of_binary_tree(root) == 3);
}


