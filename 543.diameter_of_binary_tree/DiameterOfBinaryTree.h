//
// Created by Qi Song on 07/03/2018.
//

#ifndef LEETCODE_DIAMETEROFBINARYTREE_H
#define LEETCODE_DIAMETEROFBINARYTREE_H


#include "../Base.h"

class DiameterOfBinaryTree: public Base {
    int diameter_of_binary_tree(TreeNode* root);
    int depth(TreeNode* root, int& out);
public:
    void run();

};


#endif //LEETCODE_DIAMETEROFBINARYTREE_H
