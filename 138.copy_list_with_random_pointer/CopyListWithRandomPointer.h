//
// Created by Qi Song on 04/04/2018.
//

#ifndef LEETCODE_COPYLISTWITHRANDOMPOINTER_H
#define LEETCODE_COPYLISTWITHRANDOMPOINTER_H


#include "../Base.h"

class CopyListWithRandomPointer: public Base {
    struct RandomListNode {
        int label;
        RandomListNode *next, *random;
        RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
    };
    RandomListNode *copy_random_list(RandomListNode *head);
    void print(RandomListNode *head);
public:
    void run();
};


#endif //LEETCODE_COPYLISTWITHRANDOMPOINTER_H
