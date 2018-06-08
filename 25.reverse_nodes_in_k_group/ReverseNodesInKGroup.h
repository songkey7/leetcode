//
// Created by Qi Song on 07/06/2018.
//

#ifndef LEETCODE_REVERSENODESINKGROUP_H
#define LEETCODE_REVERSENODESINKGROUP_H


#include "../Base.h"

class ReverseNodesInKGroup: public Base {
    ListNode* reverse_k_group(ListNode* head, int k);
    ListNode* reverse(ListNode* p1, ListNode *p2);
public:
    void run();
};


#endif //LEETCODE_REVERSENODESINKGROUP_H
