//
// Created by Qi Song on 1/9/18.
//

#include "MergeTwoBinaryTrees.h"

MergeTwoBinaryTrees::TreeNode * MergeTwoBinaryTrees::merge_trees(TreeNode *t1, TreeNode *t2) {
    if(!t1 && !t2) return nullptr;
    int val = (t1 ? t1->val : 0) + (t2 ? t2->val : 0);
    auto * root = new TreeNode(val);
    root->left = merge_trees(t1 ? t1->left : nullptr, t2 ? t2->left: nullptr);
    root->right = merge_trees(t1 ? t1->right : nullptr, t2 ? t2->right : nullptr);
    return root;
}

MergeTwoBinaryTrees::TreeNode * MergeTwoBinaryTrees::create_trees(vector<int> t, int i) {
    TreeNode * root = new TreeNode(t[i]);
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if(l < t.size() && t[l] != NULL) root->left = create_trees(t, l);
    if(r < t.size() && t[r] != NULL) root->right = create_trees(t, r);
    return root;
}

void MergeTwoBinaryTrees::print_trees(TreeNode *t) {
    if(t == nullptr) return;
    cout << " " << t->val;
    print_trees(t->left);
    print_trees(t->right);
}

void MergeTwoBinaryTrees::run() {
    vector<int> tree1 = {1,3,2,5};
    vector<int> tree2 = {2,1,3,NULL,4,NULL,7};
    cout << "t1";
    TreeNode* t1 = create_trees(tree1);
    print_trees(t1);
    cout << endl << "t2";
    TreeNode* t2 = create_trees(tree2);
    print_trees(t2);
    TreeNode* t = merge_trees(t1, t2);
    cout << endl << "t";
    print_trees(t);
}