//
// Created by Qi Song on 08/06/2018.
//

#include "ReorderList.h"

void ReorderList::reorder_list(ListNode *head) {
    if(!head || !head->next || !head->next->next) return;
    ListNode *p1 = head, *p2 = head;
    while(p2 && p2->next){
        p1 = p1->next;
        p2 = p2->next->next;
    }
    if(p2) p1 = p1->next;
    ListNode * tail = p1;
    p2 = p1->next;
    p1->next = nullptr;
    while(p2){
        ListNode * p3 = p2->next;
        p2->next = p1;
        p1 = p2;
        p2 = p3;
    }
    p2 = head;
    while(p2->next != tail && p1){
        ListNode * p4 = p2->next;
        ListNode * p3 = p1->next;
        p2->next = p1;
        p1->next = p4;
        p2 = p4;
        p1 = p3;
    }
    if(!p1) p2->next = nullptr;
}

void ReorderList::run() {
    //1,2,3,4,5 -> 1,5,2,4,3;
    ListNode * h = new ListNode(1);
    h->next = new ListNode(2);
    h->next->next = new ListNode(3);
    h->next->next->next = new ListNode(4);
    h->next->next->next->next = new ListNode(5);
    reorder_list(h);
    print_list(h);
}
