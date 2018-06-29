//
// Created by Qi Song on 28/06/2018.
//

#include "AverageOfLevelsInBinaryTree.h"

vector<double> AverageOfLevelsInBinaryTree::average_of_levels(Base::TreeNode *root) {
    vector<double> ret;
    queue<TreeNode *> q;
    q.push(root);
    while(!q.empty()){
        size_t n = q.size();
        double sum = 0;
        for (int i = 0; i < n; ++i) {
            TreeNode * tmp = q.front();
            q.pop();
            sum += tmp->val;
            if(tmp->left) q.push(tmp->left);
            if(tmp->right) q.push(tmp->right);
        }
        ret.push_back(sum / n);
    }
    return ret;
}

void AverageOfLevelsInBinaryTree::run() {
    TreeNode * root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    vector<double> ret = {3, 14.5, 11};
    assert(average_of_levels(root) == ret);
}
