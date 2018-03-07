//
// Created by Qi Song on 2/7/18.
//

#include "ConstructBinaryTreeFromPreorderAndInorderTraversal.h"

ConstructBinaryTreeFromPreorderAndInorderTraversal::TreeNode *
ConstructBinaryTreeFromPreorderAndInorderTraversal::build_tree(vector<int> &preorder, vector<int> &inorder, int pre_i,
                                                               int in_l, int in_r) {
    if(in_l >= in_r || pre_i >= preorder.size()) return nullptr;
    int x = preorder[pre_i];
    TreeNode * root = new TreeNode(x);
    auto itr = find(inorder.begin() + in_l, inorder.begin() + in_r, x);
    if(itr == inorder.begin() + in_r) return nullptr;
    int idx = itr - inorder.begin();
    root->left = build_tree(preorder, inorder, pre_i + 1, in_l, idx);
    root->right = build_tree(preorder, inorder, pre_i + idx - in_l + 1, idx + 1, in_r);
    return root;
}

ConstructBinaryTreeFromPreorderAndInorderTraversal::TreeNode *
ConstructBinaryTreeFromPreorderAndInorderTraversal::build_tree(vector<int> &preorder, vector<int> &inorder) {
    size_t n = preorder.size();
    if(n == 0) return nullptr;
    return build_tree(preorder, inorder, 0, 0, n);
}

void ConstructBinaryTreeFromPreorderAndInorderTraversal::run() {
    vector<int> preorder = {3,9,20,15,7};
    vector<int> inorder = {9,3,15,20,7};

    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    assert(binary_tree_equal(build_tree(preorder, inorder), root));

    vector<int> preorder2 = {3,1,2,4};
    vector<int> inorder2 = {1,2,3,4};
    TreeNode *root2 = new TreeNode(3);
    root2->left = new TreeNode(1);
    root2->left->right= new TreeNode(2);
    root2->right = new TreeNode(4);
    assert(binary_tree_equal(build_tree(preorder2, inorder2), root2));
}


