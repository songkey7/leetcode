//
// Created by Qi Song on 29/06/2018.
//

#include "LongestUnivaluePath.h"

int LongestUnivaluePath::longest_univalue_path(Base::TreeNode *root) {
    if(!root) return 0;
    int ret = 0;
    longest_univalue_path(root, ret);
    return ret - 1;
}

int LongestUnivaluePath::longest_univalue_path(TreeNode *root, int &ret) {
    if(!root) return 0;
    int l = longest_univalue_path(root->left, ret);
    int r = longest_univalue_path(root->right, ret);
    int len = 1;
    int depth = 1;
    if(root->left && root->val == root->left->val) {
        len += l;
        depth = max(depth, l + 1);
    }
    if(root->right && root->val == root->right->val) {
        len += r;
        depth = max(depth, r + 1);
    }
    ret = max(ret, len);
    return depth;
}

void LongestUnivaluePath::run() {
    TreeNode * root1 = new TreeNode(5);
    root1->left = new TreeNode(4);
    root1->right = new TreeNode(5);
    root1->left->left = new TreeNode(1);
    root1->left->right = new TreeNode(1);
    root1->right->right = new TreeNode(5);
    assert(longest_univalue_path(root1) == 2);

    TreeNode * root2 = new TreeNode(1);
    root2->left = new TreeNode(4);
    root2->right = new TreeNode(5);
    root2->left->left = new TreeNode(4);
    root2->left->right = new TreeNode(4);
    root2->right->right = new TreeNode(5);
    assert(longest_univalue_path(root2) == 2);
}
