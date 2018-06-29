//
// Created by Qi Song on 29/06/2018.
//

#include "TwoSum4.h"

bool TwoSum4::find_target(TreeNode *root, int k) {
    if(!root) return false;
    unordered_set<int> target_map;
    stack<TreeNode *> tree_stack;
    tree_stack.push(root);
    while(!tree_stack.empty()){
        TreeNode * t = tree_stack.top();
        tree_stack.pop();
        if(target_map.find(t->val) != target_map.end()) return true;
        target_map.insert(k - t->val);
        if(t->right) tree_stack.push(t->right);
        if(t->left) tree_stack.push(t->left);
    }
    return false;
}

void TwoSum4::run() {
    TreeNode * root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->right= new TreeNode(2);
    assert(find_target(root, 9));
    assert(!find_target(root, 28));
}


