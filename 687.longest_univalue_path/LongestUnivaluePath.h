//
// Created by Qi Song on 29/06/2018.
//

#ifndef LEETCODE_LONGESTUNIVALUEPATH_H
#define LEETCODE_LONGESTUNIVALUEPATH_H


#include "../Base.h"

class LongestUnivaluePath: public Base {
    int longest_univalue_path(TreeNode* root);
    int longest_univalue_path(TreeNode* root, int &ret);
public:
    void run();
};


#endif //LEETCODE_LONGESTUNIVALUEPATH_H
