//
// Created by Qi Song on 2/28/18.
//

#ifndef LEETCODE_SYMMETRICTREE_H
#define LEETCODE_SYMMETRICTREE_H


#include "../Base.h"

class SymmetricTree: public Base {

    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };

    bool is_symmetric(TreeNode * root);
    bool equal(TreeNode * root1, TreeNode * root2);

public:
    void run();

};


#endif //LEETCODE_SYMMETRICTREE_H
