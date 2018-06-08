//
// Created by Qi Song on 1/10/18.
//

#ifndef LEETCODE_SORTLIST_H
#define LEETCODE_SORTLIST_H


#include "../Base.h"

class SortList: public Base {
    ListNode* sort_list(ListNode* head);
    ListNode* merge(ListNode* p1, ListNode* p2);
public:
    void run();
};


#endif //LEETCODE_SORTLIST_H
