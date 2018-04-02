//
// Created by Qi Song on 02/04/2018.
//

#include "BinaryTreeZigzagLevelOrderTraversal.h"

vector<vector<int>> BinaryTreeZigzagLevelOrderTraversal::zigzag_level_order(Base::TreeNode *root) {
    vector<vector<int>> ret;
    level_order(root, 0, ret);
    for(int i = 1; i < ret.size(); i+=2){
        reverse(ret[i].begin(), ret[i].end());
    }
    return ret;
}

void BinaryTreeZigzagLevelOrderTraversal::level_order(Base::TreeNode *root, int level, vector<vector<int>> &out) {
    if(!root) return;
    if(level >= out.size()){
        out.push_back({root->val});
    } else{
        out[level].push_back(root->val);
    }
    level_order(root->left, level + 1, out);
    level_order(root->right , level + 1, out);
}

void BinaryTreeZigzagLevelOrderTraversal::run() {
    TreeNode * root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    vector<vector<int>> ret = {{3}, {20, 9}, {15, 7}};
    assert(zigzag_level_order(root) == ret);
}

