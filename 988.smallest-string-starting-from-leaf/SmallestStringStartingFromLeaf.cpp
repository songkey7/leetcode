//
// Created by songkey on 2020/3/8.
//

#include "SmallestStringStartingFromLeaf.h"

string SmallestStringStartingFromLeaf::smallestFromLeaf(Base::TreeNode *root) {
    return smallestFromLeaf(root, "");
}

string SmallestStringStartingFromLeaf::smallestFromLeaf(Base::TreeNode *root, string suffix) {
    if (!root) return suffix;
    auto s = char(root->val + 'a') + suffix;
    if (root->left && !root->right) {
        return smallestFromLeaf(root->left, s);
    }
    if (!root->left && root->right) {
        return smallestFromLeaf(root->right, s);
    }
    auto s1 = smallestFromLeaf(root->left, s);
    auto s2 = smallestFromLeaf(root->right, s);
    return s1 < s2 ? s1 : s2;
}

void SmallestStringStartingFromLeaf::run() {
    auto root = new TreeNode(0);
    root->left = new TreeNode(1);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(4);
    assert(smallestFromLeaf(root) == "dba");
}


