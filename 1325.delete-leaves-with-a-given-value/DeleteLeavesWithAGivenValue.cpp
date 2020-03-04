//
// Created by songkey on 2020/3/1.
//

#include "DeleteLeavesWithAGivenValue.h"

Base::TreeNode *DeleteLeavesWithAGivenValue::removeLeafNodes(Base::TreeNode *root, int target) {
    if (!root) return nullptr;
    root->left = removeLeafNodes(root->left, target);
    root->right = removeLeafNodes(root->right, target);
    if(!root->left && !root->right && root->val == target) {
        return nullptr;
    }
    return root;
}

void DeleteLeavesWithAGivenValue::run() {
    auto * root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);
    root1->left->left = new TreeNode(2);
    root1->right->left = new TreeNode(2);
    root1->right->right = new TreeNode(4);
    auto * root2 = new TreeNode(1);
    root2->right= new TreeNode(3);
    root2->right->right = new TreeNode(4);
    assert(binary_tree_equal(removeLeafNodes(root1, 2), root2));
}
