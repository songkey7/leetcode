//
// Created by Qi Song on 09/04/2018.
//

#ifndef LEETCODE_KTHSMALLESTELEMENTINABST_H
#define LEETCODE_KTHSMALLESTELEMENTINABST_H


#include "../Base.h"

class KthSmallestElementInABST: public Base {
    int kth_smallest(TreeNode* root, int k);
    int kth_smallest2(TreeNode* root, int k);
    bool search(TreeNode * root, int k, int &idx, int &ret);
public:
    void run();
};


#endif //LEETCODE_KTHSMALLESTELEMENTINABST_H
