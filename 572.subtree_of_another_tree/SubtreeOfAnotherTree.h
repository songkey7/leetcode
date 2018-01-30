//
// Created by Qi Song on 1/30/18.
//

#ifndef LEETCODE_SUBTREEOFANOTHERTREE_H
#define LEETCODE_SUBTREEOFANOTHERTREE_H


#include "../Base.h"

class SubtreeOfAnotherTree: public Base {
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };

    bool is_subtree(TreeNode* s, TreeNode* t);
    bool is_sametree(TreeNode* s, TreeNode* t);
public:
    void run();
};


#endif //LEETCODE_SUBTREEOFANOTHERTREE_H
