//
// Created by Qi Song on 12/06/2018.
//

#include "MaximumBinaryTree.h"

Base::TreeNode *MaximumBinaryTree::construct_maximum_binary_tree(vector<int> & nums) {
    return construct_maximum_binary_tree(nums, 0, nums.size() - 1);
}

Base::TreeNode *MaximumBinaryTree::construct_maximum_binary_tree(vector<int> &nums, int l, int r) {
    if(l > r) return nullptr;
    int m = l;
    for (int i = l + 1; i <= r; ++i) {
        if(nums[i] > nums[m]) m = i;
    }
    TreeNode * ret = new TreeNode(nums[m]);
    ret->left = construct_maximum_binary_tree(nums, l, m - 1);
    ret->right = construct_maximum_binary_tree(nums, m + 1, r);
    return ret;
}

void MaximumBinaryTree::run() {
    vector<int> nums1 = {3,2,1,6,0,5};
    TreeNode * ret1 = new TreeNode(6);
    ret1->left = new TreeNode(3);
    ret1->left->right = new TreeNode(2);
    ret1->left->right->right = new TreeNode(1);
    ret1->right = new TreeNode(5);
    ret1->right->left = new TreeNode(0);
    assert(binary_tree_equal(construct_maximum_binary_tree(nums1), ret1));
}


