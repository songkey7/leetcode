//
// Created by songkey on 2020/3/8.
//

#ifndef LEETCODE_SMALLESTSTRINGSTARTINGFROMLEAF_H
#define LEETCODE_SMALLESTSTRINGSTARTINGFROMLEAF_H


#include "../Base.h"

class SmallestStringStartingFromLeaf: public Base {
    string smallestFromLeaf(TreeNode* root);
    string smallestFromLeaf(TreeNode* root, string prefix);
public:
    void run() override;
};


#endif //LEETCODE_SMALLESTSTRINGSTARTINGFROMLEAF_H
