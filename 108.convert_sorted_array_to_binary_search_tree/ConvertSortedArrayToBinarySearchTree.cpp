//
// Created by Qi Song on 02/04/2018.
//

#include "ConvertSortedArrayToBinarySearchTree.h"

Base::TreeNode *ConvertSortedArrayToBinarySearchTree::sorted_array_to_BST(vector<int> &nums) {
    TreeNode * ret = build_tree(nums, 0, nums.size() - 1);
    return ret;
}

Base::TreeNode *ConvertSortedArrayToBinarySearchTree::build_tree(vector<int> &nums, int l, int r) {
    if(l > r) return nullptr;
    int m = (l + r) / 2;
    TreeNode * root = new TreeNode(nums[m]);
    root->left = build_tree(nums, l, m - 1);
    root->right = build_tree(nums, m + 1, r);
    return root;
}

void ConvertSortedArrayToBinarySearchTree::run() {
    vector<int> nums = {-10,-3,0,5,9};
    sorted_array_to_BST(nums);
}


