//
// Created by Qi Song on 11/06/2018.
//

#ifndef LEETCODE_BINARYSEARCHTREEITERATOR_H
#define LEETCODE_BINARYSEARCHTREEITERATOR_H


#include "../Base.h"

class BinarySearchTreeIterator: public Base {
    class BSTIterator {
        stack<TreeNode *> st;
    public:
        BSTIterator(TreeNode *root);

        bool hasNext();

        int next();
    };
public:
    void run();
};


#endif //LEETCODE_BINARYSEARCHTREEITERATOR_H
