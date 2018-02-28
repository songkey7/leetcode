//
// Created by Qi Song on 2/28/18.
//

#include "BinaryTreeLevelOrderTraversal.h"

vector<vector<int>> BinaryTreeLevelOrderTraversal::level_order(BinaryTreeLevelOrderTraversal::TreeNode *root) {
    vector<vector<int>> ret;
    level_order(root, 0, ret);
    return ret;
}

void BinaryTreeLevelOrderTraversal::level_order(BinaryTreeLevelOrderTraversal::TreeNode *root, int depth,
                                                vector<vector<int>> &out) {
    if(!root) return;
    if(out.size() < depth + 1){
        out.push_back({root->val});
    }
    else{
        out[depth].push_back(root->val);
    }
    level_order(root->left, depth + 1, out);
    level_order(root->right, depth + 1, out);
}

void BinaryTreeLevelOrderTraversal::run() {
    TreeNode * root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    vector<vector<int>> ret = {{3},{9,20},{15,7}};
    assert(level_order(root) == ret);
}


