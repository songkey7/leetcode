//
// Created by Qi Song on 06/03/2018.
//

#ifndef LEETCODE_FLATTENBINARYTREETOLINKEDLIST_H
#define LEETCODE_FLATTENBINARYTREETOLINKEDLIST_H


#include "../Base.h"

class FlattenBinaryTreeToLinkedList: public Base {
public:
    TreeNode * pre = nullptr;
    void flatten(TreeNode* root);
    void run();
};


#endif //LEETCODE_FLATTENBINARYTREETOLINKEDLIST_H
