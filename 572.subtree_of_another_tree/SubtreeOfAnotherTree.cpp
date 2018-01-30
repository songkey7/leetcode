//
// Created by Qi Song on 1/30/18.
//

#include "SubtreeOfAnotherTree.h"

bool SubtreeOfAnotherTree::is_subtree(TreeNode *s, TreeNode *t) {
    if(!s || !t) return false;
    return is_sametree(s, t) || s && (is_subtree(s->left, t) || is_subtree(s->right, t));
}

bool SubtreeOfAnotherTree::is_sametree(TreeNode *s, TreeNode *t) {
    if(!s && !t) return true;
    if(s && t) return s->val == t->val && is_sametree(s->left, t->left) && is_sametree(s->right, t->right);
    return false;
}

void SubtreeOfAnotherTree::run() {
    TreeNode * s1 = new TreeNode(3);
    s1->left = new TreeNode(4);
    s1->right = new TreeNode(5);
    s1->left->left = new TreeNode(1);
    s1->left->right = new TreeNode(2);
    TreeNode * t1 = new TreeNode(4);
    t1->left = new TreeNode(1);
    t1->right = new TreeNode(2);
    assert(is_subtree(s1, t1));

    TreeNode * s2 = new TreeNode(3);
    s2->left = new TreeNode(4);
    s2->right = new TreeNode(5);
    s2->left->left = new TreeNode(1);
    s2->left->right = new TreeNode(2);
    s2->left->left->left = new TreeNode(0);
    assert(!is_subtree(s2, t1));

    TreeNode * s3 = new TreeNode(1);
    s3->right = new TreeNode(1);
    s3->right->right = new TreeNode(1);
    s3->right->right->right = new TreeNode(1);
    s3->right->right->right->left = new TreeNode(2);
    TreeNode * t3 = new TreeNode(1);
    t3->right = new TreeNode(1);
    t3->right->left = new TreeNode(2);
    assert(is_subtree(s3, t3));

}
