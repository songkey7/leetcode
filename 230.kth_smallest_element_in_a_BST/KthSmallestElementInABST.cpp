//
// Created by Qi Song on 09/04/2018.
//

#include "KthSmallestElementInABST.h"

int KthSmallestElementInABST::kth_smallest(Base::TreeNode *root, int k) {
    int ret = INT_MAX;
    int idx = 0;
    search(root, k, idx, ret);
    return ret;
}

bool KthSmallestElementInABST::search(Base::TreeNode *root, int k, int &idx, int &ret) {
    if(!root) return false;
    if(search(root->left, k, idx, ret)) return true;
    idx++;
    if(k == idx){
        ret = root->val;
        return true;
    }
    return search(root->right, k, idx, ret);
}

int KthSmallestElementInABST::kth_smallest2(Base::TreeNode *root, int k) {
    stack<TreeNode*> st;
    while(root || !st.empty()){
        while(root){
            st.push(root);
            root = root->left;
        }
        if(!st.empty()){
            TreeNode * tmp = st.top();
            st.pop();
            k--;
            if(k == 0) return tmp->val;
            root = tmp->right;
        }
    }

    return INT_MAX;
}

void KthSmallestElementInABST::run() {
    TreeNode * root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);
    assert(kth_smallest2(root, 5) == 5);
}

