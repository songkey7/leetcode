//
// Created by Qi Song on 1/29/18.
//

#include "HouseRobber3.h"

int HouseRobber3::rob(TreeNode *root) {
    vector<int> ret = dfs(root);
    return max(ret[0], ret[1]);
}

vector<int> HouseRobber3::dfs(TreeNode *root) {
    if(root == nullptr) return {0,0};
    vector<int> l = dfs(root->left);
    vector<int> r = dfs(root->right);
    return {root->val + l[1] + r[1], max(l[0], l[1]) + max(r[0], r[1])};
}

void HouseRobber3::run() {
    TreeNode * root = new TreeNode(3);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(3);
    root->right->right = new TreeNode(1);
    assert(rob(root) == 7);

    TreeNode * root2 = new TreeNode(3);
    root2->left = new TreeNode(4);
    root2->right = new TreeNode(5);
    root2->left->left = new TreeNode(1);
    root2->left->right = new TreeNode(3);
    root2->right->right = new TreeNode(1);
    assert(rob(root2) == 9);

    TreeNode * root3 = new TreeNode(1);
    root3->left = new TreeNode(2);
    root3->right = new TreeNode(3);
    assert(rob(root3) == 5);

    TreeNode * root4 = new TreeNode(4);
    root4->left = new TreeNode(1);
    root4->left->left = new TreeNode(2);
    root4->left->left->left = new TreeNode(3);
    assert(rob(root4) == 7);
}
