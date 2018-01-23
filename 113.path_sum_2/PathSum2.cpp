//
// Created by Qi Song on 1/13/18.
//

#include "PathSum2.h"

vector<vector<int>> PathSum2::path_sum(TreeNode *root, int sum) {
    vector<vector<int>> paths;
    vector<int> path;
    path_sum(root, sum, path, paths);
    return paths;
}

void PathSum2::path_sum(TreeNode *root, int sum, vector<int> &path, vector<vector<int>> & paths) {
    if(!root) return;
    path.push_back(root->val);
    if(!root->left && !root->right && root->val == sum) {
        paths.push_back(path);
    }
    path_sum(root->left, sum - root->val, path, paths);
    path_sum(root->right, sum - root->val, path, paths);
    path.pop_back();
}

void PathSum2::run() {
    TreeNode * root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right= new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right= new TreeNode(2);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->left = new TreeNode(5);
    root->right->right->right = new TreeNode(1);
    vector<vector<int>> ret = {{5,4,11,2}, {5,8,4,5}};
    assert(path_sum(root, 22) == ret);
}


