//
// Created by Qi Song on 15/05/2018.
//

#include "UniqueBinarySearchTrees2.h"

vector<Base::TreeNode *> UniqueBinarySearchTrees2::generate_trees(int n) {
    deque<TreeNode *> q;
    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            q.push_back(new TreeNode(1));
            continue;
        }
        int n = q.size();
        for (int j = 0; j < n; ++j) {
            // when i is root
            TreeNode * t = q.front();
            TreeNode * new_node = new TreeNode(i);
            new_node->left = t;
            q.push_back(clone(new_node));
            // when i is not root, put i on the right child and right child on the i's left
            while(t){
                TreeNode * right = t->right;
                t->right = new TreeNode(i);
                t->right->left = right;
                q.push_back(clone(q.front()));
                t->right = right;
                t = right;
            }
            q.pop_front();
        }
    }
    return vector<TreeNode*>(q.begin(), q.end());
}

Base::TreeNode *UniqueBinarySearchTrees2::clone(Base::TreeNode *root) {
    if(!root) return nullptr;
    TreeNode * t = new TreeNode(root->val);
    t->left = clone(root->left);
    t->right = clone(root->right);
    return t;
}

void UniqueBinarySearchTrees2::run() {
    generate_trees(3);
    for(auto t: generate_trees(3)){
        print_tree(t);
        cout << endl;
    }
}

