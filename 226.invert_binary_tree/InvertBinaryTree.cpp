//
// Created by Qi Song on 2/27/18.
//

#include "InvertBinaryTree.h"

InvertBinaryTree::TreeNode *InvertBinaryTree::invert_tree(InvertBinaryTree::TreeNode *root) {
    if(root){
        TreeNode * tmp = invert_tree(root->right);
        root->right= invert_tree(root->left);
        root->left = tmp;
    }
    return root;
}

void InvertBinaryTree::run() {
    TreeNode * root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right = new TreeNode(7);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);

    TreeNode * ret = new TreeNode(4);
    ret->left = new TreeNode(7);
    ret->left->left = new TreeNode(9);
    ret->left->right = new TreeNode(6);
    ret->right = new TreeNode(2);
    ret->right->left = new TreeNode(3);
    ret->right->right = new TreeNode(1);

    //assert(equal(root, root));
    TreeNode * r = invert_tree(root);
    assert(binary_tree_equal(r, ret));
}


