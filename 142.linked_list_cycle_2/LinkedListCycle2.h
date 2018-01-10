//
// Created by Qi Song on 1/10/18.
//

#ifndef LEETCODE_LINKEDLISTCYCLE2_H
#define LEETCODE_LINKEDLISTCYCLE2_H


#include "../Base.h"

class LinkedListCycle2: public Base{
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };

    ListNode* create_list();
    ListNode *detectCycle(ListNode *head);
    ListNode *detectCycle2(ListNode *head);
public:
    void run();
};


#endif //LEETCODE_LINKEDLISTCYCLE2_H
