//
// Created by Qi Song on 02/04/2018.
//

#include "PopulatingNextRightPointersInEachNode.h"

void PopulatingNextRightPointersInEachNode::connect(TreeLinkNode *root) {
    vector<TreeLinkNode *> vec;
    connect(root, 0, vec);
}

void PopulatingNextRightPointersInEachNode::connect(TreeLinkNode *root, int level, vector<TreeLinkNode *> &vec) {
    if(!root) return;
    if(level >= vec.size()){
        vec.push_back(root);
    } else{
        vec[level]->next = root;
        vec[level] = root;
    }
    connect(root->left, level + 1, vec);
    connect(root->right, level + 1, vec);
}

void PopulatingNextRightPointersInEachNode::run() {
    TreeLinkNode *root = new TreeLinkNode(1);
    root->left = new TreeLinkNode(2);
    root->right = new TreeLinkNode(3);
    root->left->left = new TreeLinkNode(4);
    root->left->right = new TreeLinkNode(5);
    root->right->left = new TreeLinkNode(6);
    root->right->right = new TreeLinkNode(7);
    connect(root);
}


