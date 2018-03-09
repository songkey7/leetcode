//
// Created by Qi Song on 09/03/2018.
//

#ifndef LEETCODE_REMOVENTHNODEFROMENDOFLIST_H
#define LEETCODE_REMOVENTHNODEFROMENDOFLIST_H


#include "../Base.h"

class RemoveNthNodeFromEndOfList: public Base {
    ListNode* remove_nth_from_end(ListNode* head, int n);
    void print(ListNode * head);
public:
    void run();

};


#endif //LEETCODE_REMOVENTHNODEFROMENDOFLIST_H
