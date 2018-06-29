//
// Created by Qi Song on 14/06/2018.
//

#include "BinaryTreeRightSideView.h"

vector<int> BinaryTreeRightSideView::right_side_view(Base::TreeNode *root) {
    vector<int> ret;
    queue<TreeNode *> q;
    if(root) q.push(root);
    while(!q.empty()){
        size_t n = q.size();
        int x;
        while(n--){
            TreeNode * tmp = q.front();
            q.pop();
            x = tmp->val;
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
        }
        ret.push_back(x);
    }
    return ret;
}

void BinaryTreeRightSideView::run() {
    TreeNode * root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(4);
    vector<int> ret = {1, 3, 4};
    assert(right_side_view(root) == ret);
}

