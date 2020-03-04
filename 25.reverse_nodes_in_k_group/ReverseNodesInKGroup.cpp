//
// Created by Qi Song on 07/06/2018.
//

#include "ReverseNodesInKGroup.h"

Base::ListNode *ReverseNodesInKGroup::reverse_k_group(ListNode *head, int k) {
    ListNode *h = new ListNode(0);
    h->next = head;
    ListNode *p1 = h, *p2 = head;
    while(p2) { //
        ListNode *p = p2;
        int i = 0;
        for (; i < k && p; ++i) p = p->next;
        if(i < k) break;
        p1->next = reverse(p2, p);
        p1 = p2;
        p2->next = p;
        p2 = p;
    }
    return h->next;
}

Base::ListNode *ReverseNodesInKGroup::reverse(ListNode *p1, ListNode *p2) {
    ListNode * h = nullptr;
    while(p1 != p2){
        ListNode * p = p1->next;
        p1->next = h;
        h = p1;
        p1 = p;
    }
    return h;
}

void ReverseNodesInKGroup::run() {
    ListNode * h = new ListNode(1);
    h->next = new ListNode(2);
    h->next->next = new ListNode(3);
    h->next->next->next = new ListNode(4);
    h->next->next->next->next = new ListNode(5);
    print_list(reverse_k_group(h, 3));
}


