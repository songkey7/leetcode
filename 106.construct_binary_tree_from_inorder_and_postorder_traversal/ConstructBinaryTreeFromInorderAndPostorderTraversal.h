//
// Created by Qi Song on 16/05/2018.
//

#ifndef LEETCODE_CONSTRUCTBINARYTREEFROMINORDERANDPOSTORDERTRAVERSAL_H
#define LEETCODE_CONSTRUCTBINARYTREEFROMINORDERANDPOSTORDERTRAVERSAL_H


#include "../Base.h"

class ConstructBinaryTreeFromInorderAndPostorderTraversal: public Base {
    TreeNode* build_tree(vector<int>& inorder, vector<int>& postorder);
    TreeNode* build_tree(vector<int>& inorder, vector<int>& postorder, int post_i, int in_l, int in_r);
public:
    void run();
};


#endif //LEETCODE_CONSTRUCTBINARYTREEFROMINORDERANDPOSTORDERTRAVERSAL_H
