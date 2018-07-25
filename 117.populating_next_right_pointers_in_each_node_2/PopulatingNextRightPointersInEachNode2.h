//
// Created by Qi Song on 05/07/2018.
//

#ifndef LEETCODE_POPULATINGNEXTRIGHTPOINTERSINEACHNODE2_H
#define LEETCODE_POPULATINGNEXTRIGHTPOINTERSINEACHNODE2_H


#include "../Base.h"

class PopulatingNextRightPointersInEachNode2: public Base{
    struct TreeLinkNode {
        int val;
        TreeLinkNode *left, *right, *next;
        TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
    };
    void connect(TreeLinkNode *root);
public:
    void run();
};

#endif //LEETCODE_POPULATINGNEXTRIGHTPOINTERSINEACHNODE2_H
