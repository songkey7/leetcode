//
// Created by Qi Song on 07/06/2018.
//

#include "ReverseNodesInKGroup.h"

Base::ListNode *ReverseNodesInKGroup::reverse_k_group(ListNode *head, int k) {
    ListNode *h = new ListNode(0);
    h->next = head;
    ListNode *pre = h, *p = head;
    ListNode *p1 = pre;
    int cnt = 0;
    while(p){
        if(cnt++ == 0) p1 = p;
        if(cnt == k){
            cnt = 0;
            ListNode * p2 = p->next;
            pre->next = reverse(p1, p);
            pre = p1;
            p1->next = p = p2;
        } else{
            p = p->next;
        }
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
    p1->next = h;
    return p1;
}

void ReverseNodesInKGroup::run() {
    ListNode * h = new ListNode(1);
    h->next = new ListNode(2);
    h->next->next = new ListNode(3);
    h->next->next->next = new ListNode(4);
    h->next->next->next->next = new ListNode(5);
    //print_list(reverse_k_group(h, 2));
    print_list(reverse_k_group(h, 3));
}


