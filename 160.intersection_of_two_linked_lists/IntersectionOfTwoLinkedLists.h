//
// Created by Qi Song on 1/31/18.
//

#ifndef LEETCODE_INTERSECTIONOFTWOLINKEDLISTS_H
#define LEETCODE_INTERSECTIONOFTWOLINKEDLISTS_H


#include "../Base.h"

class IntersectionOfTwoLinkedLists: public Base {
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };
    ListNode *get_intersection_node(ListNode *a, ListNode *b);
public:
    void run();
};


#endif //LEETCODE_INTERSECTIONOFTWOLINKEDLISTS_H
