//
// Created by Qi Song on 2/27/18.
//

#include "ValidateBinarySearchTree.h"

bool ValidateBinarySearchTree::is_valid_BST(ValidateBinarySearchTree::TreeNode *root) {
    long pre = LONG_MIN;
    return is_valid_BST(root, pre);
}

bool ValidateBinarySearchTree::is_valid_BST(ValidateBinarySearchTree::TreeNode *root, long &pre) {
    if(!root) return true;
    if(!is_valid_BST(root->left, pre)) return false;
    if(pre > root->val) return false;
    pre = root->val;
    if(!is_valid_BST(root->right, pre)) return false;
    return true;
}

bool ValidateBinarySearchTree::is_valid_BST2(ValidateBinarySearchTree::TreeNode *root) {
    stack<TreeNode *> st;
    if(root) st.push(root);
    long pre = LONG_MIN;
    while(!st.empty()){
        TreeNode* p = st.top();
        if(p->left){
            st.push(p->left);
            p->left = NULL;
        }
        else{
            if(p->val <= pre) return false;
            pre = p->val;
            st.pop();
            if(p->right) {
                st.push(p->right);
                p->right = NULL;
            }
        }
    }
    return true;
}

void ValidateBinarySearchTree::run() {
    TreeNode * root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);
    assert(!is_valid_BST2(root1));

    TreeNode * root2 = new TreeNode(2);
    root2->left = new TreeNode(1);
    root2->right = new TreeNode(3);
    assert(is_valid_BST2(root2));
}


