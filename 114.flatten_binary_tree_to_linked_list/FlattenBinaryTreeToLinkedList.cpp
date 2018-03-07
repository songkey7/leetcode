//
// Created by Qi Song on 06/03/2018.
//

#include "FlattenBinaryTreeToLinkedList.h"

void FlattenBinaryTreeToLinkedList::flatten(TreeNode *root) {
    if(!root) return;
    TreeNode *p = root->right;
    if(pre)
    {
        pre->left = nullptr;
        pre->right = root;
    }
    pre = root;
    flatten(root->left);
    flatten(p);
}

void FlattenBinaryTreeToLinkedList::run() {
    TreeNode * root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(6);
    flatten(root);

    TreeNode * p = root;
    while(p){
        cout << p->val << " ";
        p = p->right;
    }
}


