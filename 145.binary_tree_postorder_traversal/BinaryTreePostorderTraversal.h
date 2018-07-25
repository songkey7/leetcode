//
// Created by Qi Song on 10/07/2018.
//

#ifndef LEETCODE_BINARYTREEPOSTORDERTRAVERSAL_H
#define LEETCODE_BINARYTREEPOSTORDERTRAVERSAL_H


#include "../Base.h"

class BinaryTreePostorderTraversal: public Base {
    vector<int> postorder_traversal(TreeNode* root);
    void postorder_traversal(TreeNode* root, vector<int> &ret);
public:
    void run();
};


#endif //LEETCODE_BINARYTREEPOSTORDERTRAVERSAL_H
