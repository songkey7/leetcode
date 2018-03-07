//
// Created by Qi Song on 2/28/18.
//

#ifndef LEETCODE_BINARYTREELEVELORDERTRAVERSAL_H
#define LEETCODE_BINARYTREELEVELORDERTRAVERSAL_H


#include "../Base.h"

class BinaryTreeLevelOrderTraversal: public Base {
    vector<vector<int>> level_order(TreeNode* root);
    void level_order(TreeNode* root, int depth, vector<vector<int>> &out);
public:
    void run();

};


#endif //LEETCODE_BINARYTREELEVELORDERTRAVERSAL_H
