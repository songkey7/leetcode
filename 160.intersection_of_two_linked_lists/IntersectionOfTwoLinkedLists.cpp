//
// Created by Qi Song on 1/31/18.
//

#include "IntersectionOfTwoLinkedLists.h"

Base::ListNode * IntersectionOfTwoLinkedLists::get_intersection_node(ListNode *a, ListNode *b) {
    ListNode *p1 = a, *p2 = b;
    while(p1 != p2){
        p1 = p1 ? p1->next : b;
        p2 = p2 ? p2->next : a;
    }
    return p1;
}

void IntersectionOfTwoLinkedLists::run() {
    auto * a = new ListNode(1);
    a->next = new ListNode(2);
    auto * b = new ListNode(11);
    b->next = new ListNode(12);
    b->next->next = new ListNode(13);
    auto * c = new ListNode(21);
    c->next = new ListNode(22);
    c->next->next = new ListNode(23);
    a->next->next = c;
    b->next->next->next = c;
    assert(get_intersection_node(a,b)->val == 21);
}