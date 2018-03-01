//
// Created by Qi Song on 3/1/18.
//

#include "LowestCommonAncestorOfABinaryTree.h"

LowestCommonAncestorOfABinaryTree::TreeNode *
LowestCommonAncestorOfABinaryTree::lowest_common_ancestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    stack<TreeNode *> path1, path2;
    TreeNode * ret = nullptr;
    if(search_node(root, p, path1) && search_node(root, q, path2)){
        while(!path1.empty() && !path2.empty() && path1.top() == path2.top()){
            ret = path1.top();
            path1.pop();
            path2.pop();
        }
    }
    return ret;
}

bool LowestCommonAncestorOfABinaryTree::search_node(TreeNode *root, TreeNode *p, stack<TreeNode*> &out) {
    if(!root) return false;
    if(p == root || search_node(root->left, p, out) || search_node(root->right, p, out)){
        out.push(root);
        return true;
    }
    return false;
}

void LowestCommonAncestorOfABinaryTree::run() {
    TreeNode * root = new TreeNode(3);
    TreeNode * p1 = root->left = new TreeNode(5);
    TreeNode * p2 = root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->left->right->left = new TreeNode(7);
    TreeNode * p3 = root->left->right->right = new TreeNode(4);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    assert(lowest_common_ancestor(root, p1, p2) == root);
    assert(lowest_common_ancestor(root, p1, p3) == p1);
}


