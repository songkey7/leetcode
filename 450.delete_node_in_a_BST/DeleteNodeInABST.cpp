//
// Created by Qi Song on 05/07/2018.
//

#include "DeleteNodeInABST.h"

Base::TreeNode *DeleteNodeInABST::delete_node(TreeNode *root, int key) {
    if(!root) return root;
    TreeNode * head = new TreeNode(0);
    TreeNode * pre = head;
    bool left = true;
    pre->left = root;
    TreeNode * p = root;
    while(p){
        if(p->val == key) {
            if(!p->left) {
                if(left) pre->left = p->right;
                else pre->right = p->right;
            }
            else if(!p->right) {
                if(left) pre->left = p->left;
                else pre->right = p->left;
            }
            else{
                if(left) pre->left = p->left;
                else pre->right = p->left;
                TreeNode * pp = p->left;
                while(pp->right){
                    pp = pp->right;
                }
                pp->right = p->right;
            }
            break;
        }
        else if(p->val < key) {
            pre = p;
            p = p->right;
            left = false;
        }
        else {
            pre = p;
            p = p->left;
            left = true;
        }
    }
    return head->left;
}

void DeleteNodeInABST::run() {
    TreeNode * root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(7);
    print_tree(root);
    print_tree(delete_node(root, 3));
}
