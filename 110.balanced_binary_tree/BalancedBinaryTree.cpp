//
// Created by songkey on 2018/6/9.
//

#include "BalancedBinaryTree.h"

bool BalancedBinaryTree::is_balanced(Base::TreeNode *root) {
    int d = 0;
    return depth(root, d);
}

bool BalancedBinaryTree::depth(TreeNode *root, int &d) {
    if(!root) return true;
    int d1 = d + 1, d2 = d + 1;
    bool b1 = depth(root->left, d1);
    bool b2 = depth(root->right , d2);
    d = max(d1, d2);
    return b1 && b2 && abs(d1 - d2) < 2;
}

void BalancedBinaryTree::run() {
    TreeNode * root1 = new TreeNode(3);
    root1->left = new TreeNode(9);
    root1->right = new TreeNode(20);
    root1->right->left = new TreeNode(15);
    root1->right->right = new TreeNode(7);
    assert(is_balanced(root1));

    TreeNode * root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(2);
    root2->left->left = new TreeNode(3);
    root2->left->right = new TreeNode(3);
    root2->left->left->left = new TreeNode(4);
    root2->left->left->right = new TreeNode(4);
    assert(!is_balanced(root2));
}


