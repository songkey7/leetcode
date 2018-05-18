//
// Created by Qi Song on 16/05/2018.
//

#include "ConstructBinaryTreeFromInorderAndPostorderTraversal.h"

Base::TreeNode *
ConstructBinaryTreeFromInorderAndPostorderTraversal::build_tree(vector<int> &inorder, vector<int> &postorder,
                                                                int post_i, int in_l, int in_r) {
    if(in_l >= in_r || post_i < 0) return nullptr;
    TreeNode * root = new TreeNode(postorder[post_i]);
    auto itr = find(inorder.begin() + in_l, inorder.begin() + in_r, postorder[post_i]);
    if(itr == inorder.begin() + in_r) return root;
    int idx = itr - inorder.begin();
    root->left = build_tree(inorder, postorder, post_i - in_r + idx, in_l, idx);
    root->right = build_tree(inorder, postorder, post_i - 1, idx + 1, in_r);
    return root;
}

Base::TreeNode *
ConstructBinaryTreeFromInorderAndPostorderTraversal::build_tree(vector<int> &inorder, vector<int> &postorder) {
    return build_tree(inorder, postorder, postorder.size() - 1, 0, inorder.size());
}

void ConstructBinaryTreeFromInorderAndPostorderTraversal::run() {
    vector<int> inorder = {9, 3, 15, 20, 7};
    vector<int> postorder = {9, 15, 7, 20, 3};
    TreeNode *ret = new TreeNode(3);
    ret->left = new TreeNode(9);
    ret->right = new TreeNode(20);
    ret->right->left = new TreeNode(15);
    ret->right->right = new TreeNode(7);
    assert(binary_tree_equal(build_tree(inorder, postorder), ret));
}


