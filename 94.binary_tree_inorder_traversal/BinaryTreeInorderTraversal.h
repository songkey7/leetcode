//
// Created by Qi Song on 2/27/18.
//

#ifndef LEETCODE_BINARYTREEINORDERTRAVERSAL_H
#define LEETCODE_BINARYTREEINORDERTRAVERSAL_H


#include "../Base.h"

class BinaryTreeInorderTraversal: public Base {
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };
    vector<int> inorder_traversal(TreeNode* root);
    void inorder_traversal(TreeNode* root, vector<int> & out);
public:
    void run();
};


#endif //LEETCODE_BINARYTREEINORDERTRAVERSAL_H
