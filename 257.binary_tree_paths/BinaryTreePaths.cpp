//
// Created by Qi Song on 02/07/2018.
//

#include "BinaryTreePaths.h"

vector<string> BinaryTreePaths::binary_tree_paths(TreeNode *root) {
    vector<string> ret;
    binary_tree_paths(root, "", ret);
    return ret;
}

void BinaryTreePaths::binary_tree_paths(Base::TreeNode *root, string s, vector<string> &ret) {
    if(!root) return;
    if(!s.empty()) s += "->";
    s += to_string(root->val);
    if(!root->left && !root->right) {
        ret.push_back(s);
    }
    else{
        binary_tree_paths(root->left, s, ret);
        binary_tree_paths(root->right, s, ret);
    }
}

void BinaryTreePaths::run() {
    TreeNode * root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    vector<string> ret = {"1->2->5", "1->3"};
    assert(binary_tree_paths(root) == ret);
}


