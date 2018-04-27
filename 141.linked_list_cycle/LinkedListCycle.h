//
// Created by Qi Song on 1/10/18.
//

#ifndef LEETCODE_LINKEDLISTCYCLE_H
#define LEETCODE_LINKEDLISTCYCLE_H


#include "../Base.h"

class LinkedListCycle: public Base {
    ListNode* create_list();
    bool has_cycle(ListNode *head);
    bool has_cycle2(ListNode *head);
public:
    void run();
};


#endif //LEETCODE_LINKEDLISTCYCLE_H
