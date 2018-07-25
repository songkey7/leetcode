//
// Created by Qi Song on 10/07/2018.
//

#include "BinaryTreePostorderTraversal.h"

vector<int> BinaryTreePostorderTraversal::postorder_traversal(TreeNode *root) {
    vector<int> ret;
    stack<TreeNode *> stk;
    TreeNode * pre = nullptr;
    if(root) stk.push(root);
    while(!stk.empty()){
        TreeNode * cur = stk.top();
        if((!cur->left && !cur->right)||(pre && (pre == cur->left || pre == cur->right))){
            ret.push_back(cur->val);
            stk.pop();
            pre = cur;
        }
        else{
            if(cur->right) stk.push(cur->right);
            if(cur->left) stk.push(cur->left);
        }
    }
    //postorder_traversal(root, ret);
    return ret;
}

void BinaryTreePostorderTraversal::postorder_traversal(Base::TreeNode *root, vector<int> &ret) {
    if(!root) return;
    postorder_traversal(root->left, ret);
    postorder_traversal(root->right, ret);
    ret.push_back(root->val);
}

void BinaryTreePostorderTraversal::run() {
    TreeNode * root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> ret = {3,2,1};
    assert(postorder_traversal(root) == ret);
}

