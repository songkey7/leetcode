//
// Created by Qi Song on 1/9/18.
//

#ifndef LEETCODE_MERGETWOBINARYTREES_H
#define LEETCODE_MERGETWOBINARYTREES_H


#include "../Base.h"

class MergeTwoBinaryTrees: public Base {
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };

    TreeNode* create_trees(vector<int> t1, int i = 0);
    void print_trees(TreeNode* t);
    TreeNode* merge_trees(TreeNode* t1, TreeNode* t2);

public:
    void run();
};


#endif //LEETCODE_MERGETWOBINARYTREES_H
