//
// Created by Qi Song on 02/04/2018.
//

#ifndef LEETCODE_POPULATINGNEXTRIGHTPOINTERSINEACHNODE_H
#define LEETCODE_POPULATINGNEXTRIGHTPOINTERSINEACHNODE_H


#include "../Base.h"

class PopulatingNextRightPointersInEachNode: public Base {
    struct TreeLinkNode {
        int val;
        TreeLinkNode *left, *right, *next;
        TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
    };
    void connect(TreeLinkNode *root);
    void connect(TreeLinkNode *root, int level, vector<TreeLinkNode *> &vec);
public:
    void run();
};


#endif //LEETCODE_POPULATINGNEXTRIGHTPOINTERSINEACHNODE_H
