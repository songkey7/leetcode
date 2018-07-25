//
// Created by Qi Song on 16/07/2018.
//

#ifndef LEETCODE_COUNTCOMPLETETREENODES_H
#define LEETCODE_COUNTCOMPLETETREENODES_H


#include "../Base.h"

class CountCompleteTreeNodes: public Base {
    int count_nodes(TreeNode* root);
public:
    void run();

    int height(TreeNode *root);
};


#endif //LEETCODE_COUNTCOMPLETETREENODES_H
