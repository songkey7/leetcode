//
// Created by Qi Song on 15/05/2018.
//

#ifndef LEETCODE_UNIQUEBINARYSEARCHTREES2_H
#define LEETCODE_UNIQUEBINARYSEARCHTREES2_H


#include "../Base.h"

class UniqueBinarySearchTrees2: public Base {
    vector<TreeNode*> generate_trees(int n);
    void generate_tree(int l, int r, int n, int &cnt, TreeNode * &t, TreeNode * &root, vector<TreeNode *> &ret);
    TreeNode * clone(TreeNode *);
public:
    void run();
};


#endif //LEETCODE_UNIQUEBINARYSEARCHTREES2_H
