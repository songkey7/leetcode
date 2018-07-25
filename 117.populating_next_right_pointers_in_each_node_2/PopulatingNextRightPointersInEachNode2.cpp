//
// Created by Qi Song on 05/07/2018.
//

#include "PopulatingNextRightPointersInEachNode2.h"

void PopulatingNextRightPointersInEachNode2::connect(TreeLinkNode *root) {
    if(!root) return;
    queue<TreeLinkNode *> q;
    q.push(root);
    while(!q.empty()){
        size_t n = q.size();
        for (int i = 0; i < n - 1; ++i) {
            TreeLinkNode * tmp = q.front();
            q.pop();
            tmp->next = q.front();
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
        }
        if(q.front()->left) q.push(q.front()->left);
        if(q.front()->right) q.push(q.front()->right);
        q.pop();
    }
}

void PopulatingNextRightPointersInEachNode2::run() {
    TreeLinkNode * root = new TreeLinkNode(1);
    root->left = new TreeLinkNode(2);
    root->right = new TreeLinkNode(3);
    root->left->left = new TreeLinkNode(4);
    root->left->right = new TreeLinkNode(5);
    root->right->left = new TreeLinkNode(7);
    connect(root);
}
