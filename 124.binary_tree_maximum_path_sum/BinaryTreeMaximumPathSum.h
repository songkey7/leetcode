//
// Created by Qi Song on 2/28/18.
//

#ifndef LEETCODE_BINARYTREEMAXIMUMPATHSUM_H
#define LEETCODE_BINARYTREEMAXIMUMPATHSUM_H


#include "../Base.h"

class BinaryTreeMaximumPathSum: public Base {
    int max_path_sum(TreeNode* root);
    int max_path_sum(TreeNode* root, int & ret);
public:
    void run();
};


#endif //LEETCODE_BINARYTREEMAXIMUMPATHSUM_H
