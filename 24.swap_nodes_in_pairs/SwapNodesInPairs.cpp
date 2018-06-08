//
// Created by Qi Song on 07/06/2018.
//

#include "SwapNodesInPairs.h"

Base::ListNode *SwapNodesInPairs::swap_pairs(ListNode *head) {
    if(!head || !head->next) return head;
    ListNode * h = new ListNode(0);
    ListNode * pre = h, * p1 = head, * p2 = head->next;
    while(p1 && p2){
        p1->next = p2->next;
        p2->next = p1;
        pre->next = p2;
        pre = p1;
        p1 = p1->next;
        if(p1) p2 = p1->next;
    }
    return h->next;
}

void SwapNodesInPairs::run() {
    ListNode * h = new ListNode(1);
    h->next = new ListNode(2);
    h->next->next = new ListNode(3);
    h->next->next->next = new ListNode(4);
    h->next->next->next->next = new ListNode(5);
    print_list(swap_pairs(h));
}
