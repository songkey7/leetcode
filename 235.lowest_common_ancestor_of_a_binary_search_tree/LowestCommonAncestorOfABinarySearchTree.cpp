//
// Created by Qi Song on 15/06/2018.
//

#include "LowestCommonAncestorOfABinarySearchTree.h"

Base::TreeNode *
LowestCommonAncestorOfABinarySearchTree::lowest_common_ancestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    if(p->val < root->val && q->val < root->val){
        return lowest_common_ancestor(root->left, p, q);
    }
    else if(p->val > root->val && q->val > root->val){
        return lowest_common_ancestor(root->right, p, q);
    }
    return root;
}

void LowestCommonAncestorOfABinarySearchTree::run() {
    TreeNode * root = new TreeNode(6);
    root->left = new TreeNode(2);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);
    root->left->right->left = new TreeNode(3);
    root->left->right->left = new TreeNode(5);
    TreeNode *p = root->left;
    TreeNode *q = root->right;
    //assert(lowest_common_ancestor(root, p, q) == root);
    q = root->left->right;
    assert(lowest_common_ancestor(root, p, q) == p);
}
