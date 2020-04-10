//
// Created by songkey on 2020/4/10.
//

#ifndef LEETCODE_LOWESTCOMMONANCESTOROFDEEPESTLEAVES_H
#define LEETCODE_LOWESTCOMMONANCESTOROFDEEPESTLEAVES_H


#include "../Base.h"

class LowestCommonAncestorOfDeepestLeaves: public Base {
    TreeNode* lcaDeepestLeaves(TreeNode* root);
    TreeNode* lcaDeepestLeaves(TreeNode* root, int& depth);
public:
    void run() override;

};


#endif //LEETCODE_LOWESTCOMMONANCESTOROFDEEPESTLEAVES_H
