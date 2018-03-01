//
// Created by Qi Song on 3/1/18.
//

#ifndef LEETCODE_LOWESTCOMMONANCESTOROFABINARYTREE_H
#define LEETCODE_LOWESTCOMMONANCESTOROFABINARYTREE_H


#include "../Base.h"

class LowestCommonAncestorOfABinaryTree: public Base {
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };
    TreeNode* lowest_common_ancestor(TreeNode *root, TreeNode *p, TreeNode *q);
    bool search_node(TreeNode* root, TreeNode* p, stack<TreeNode*> &out);
public:
    void run();

};


#endif //LEETCODE_LOWESTCOMMONANCESTOROFABINARYTREE_H
