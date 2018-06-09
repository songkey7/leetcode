//
// Created by songkey on 2018/6/9.
//

#include "SameTree.h"

bool SameTree::is_same_tree(TreeNode *p, TreeNode *q) {
    if(!p || !q) return p == q;
    return p->val == q->val && is_same_tree(p->left, q->left) && is_same_tree(p->right, q->right);
}

void SameTree::run() {
    TreeNode * root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);
    TreeNode * root2 = new TreeNode(1);
    root2->left = new TreeNode(3);
    root2->right = new TreeNode(2);
    assert(is_same_tree(root1, root1));
    assert(!is_same_tree(root1, root2));
}
