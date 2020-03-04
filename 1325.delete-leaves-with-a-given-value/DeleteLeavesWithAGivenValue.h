//
// Created by songkey on 2020/3/1.
//

#ifndef LEETCODE_DELETELEAVESWITHAGIVENVALUE_H
#define LEETCODE_DELETELEAVESWITHAGIVENVALUE_H


#include "../Base.h"

class DeleteLeavesWithAGivenValue: public Base {
    TreeNode* removeLeafNodes(TreeNode* root, int target);
public:
    void run() override ;

};


#endif //LEETCODE_DELETELEAVESWITHAGIVENVALUE_H
