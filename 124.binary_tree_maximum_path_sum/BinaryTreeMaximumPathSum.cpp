//
// Created by Qi Song on 2/28/18.
//

#include "BinaryTreeMaximumPathSum.h"

int BinaryTreeMaximumPathSum::max_path_sum(BinaryTreeMaximumPathSum::TreeNode *root) {
    int ret = INT_MIN;
    max_path_sum(root, ret);
    return ret;
}

int BinaryTreeMaximumPathSum::max_path_sum(BinaryTreeMaximumPathSum::TreeNode *root, int &out) {
    if(!root) return 0;
    int l = max_path_sum(root->left, out);
    int r = max_path_sum(root->right, out);
    l = l > 0 ? l : 0;
    r = r > 0 ? r : 0;
    out = max(out, r + l + root->val);
    return max(root->val + l, root->val + r);
}

void BinaryTreeMaximumPathSum::run() {
    TreeNode * root = new TreeNode(-3);
    //root->left = new TreeNode(2);
    //root->right = new TreeNode(3);
    assert(max_path_sum(root) == -3);
}


