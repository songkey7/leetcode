//
// Created by Qi Song on 13/06/2018.
//

#include "TrimABinarySearchTree.h"

Base::TreeNode *TrimABinarySearchTree::trimBST(Base::TreeNode *root, int L, int R) {
    if(!root) return nullptr;
    if(root->val < L) return trimBST(root->right, L, R);
    if(root->val > R) return trimBST(root->left, L, R);
    root->left = trimBST(root->left, L, R);
    root->right = trimBST(root->right, L, R);
    return root;
}

void TrimABinarySearchTree::run() {
    TreeNode * root = new TreeNode(3);
    root->left = new TreeNode(0);
    root->right = new TreeNode(4);
    root->left->right = new TreeNode(2);
    root->left->right->left = new TreeNode(1);

    TreeNode * ret = new TreeNode(3);
    ret->left = new TreeNode(2);
    ret->left->left = new TreeNode(1);
    print_tree(trimBST(root, 1, 3));
    assert(binary_tree_equal(trimBST(root, 1, 3), ret));
}
