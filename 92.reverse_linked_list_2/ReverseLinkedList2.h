//
// Created by Qi Song on 08/06/2018.
//

#ifndef LEETCODE_REVERSELINKEDLIST2_H
#define LEETCODE_REVERSELINKEDLIST2_H


#include "../Base.h"

class ReverseLinkedList2: public Base {
    ListNode* reverse_between(ListNode* head, int m, int n);
public:
    void run();
};


#endif //LEETCODE_REVERSELINKEDLIST2_H
