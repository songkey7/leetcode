//
// Created by Qi Song on 02/04/2018.
//

#ifndef LEETCODE_BINARYTREEZIGZAGLEVELORDERTRAVERSAL_H
#define LEETCODE_BINARYTREEZIGZAGLEVELORDERTRAVERSAL_H


#include "../Base.h"

class BinaryTreeZigzagLevelOrderTraversal: public Base {
    vector<vector<int>> zigzag_level_order(TreeNode* root);
    void level_order(TreeNode* root, int level, vector<vector<int>> &out);
public:
    void run();
};


#endif //LEETCODE_BINARYTREEZIGZAGLEVELORDERTRAVERSAL_H
