//
// Created by Qi Song on 1/30/18.
//

#ifndef LEETCODE_ADDTWONUMBERS_H
#define LEETCODE_ADDTWONUMBERS_H


#include "../Base.h"

class AddTwoNumbers: public Base {
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };
    ListNode* add_two_numbers(ListNode* l1, ListNode* l2);
public:
    void run();
};


#endif //LEETCODE_ADDTWONUMBERS_H
