//
// Created by Qi Song on 08/06/2018.
//

#include "ReverseLinkedList2.h"

Base::ListNode *ReverseLinkedList2::reverse_between(Base::ListNode *head, int m, int n) {
    if(m >= n) return head;
    ListNode * h = new ListNode(0);
    h->next = head;
    ListNode * pre = h, *p = head;
    int cnt = 0;
    while(p){
        if(++cnt < m){
            pre = p;
        }
        else if(cnt >= n){
            ListNode *p2 = pre->next, *p1 = p->next, *p3 = p2->next;
            while(p1 != p){
                p2->next = p1;
                p1 = p2;
                p2 = p3;
                if(p2) p3 = p2->next;
            }
            pre->next = p1;
            break;
        }
        p = p->next;
    }
    return h->next;
}

void ReverseLinkedList2::run() {
    ListNode * h = new ListNode(1);
    h->next = new ListNode(2);
    h->next->next = new ListNode(3);
    h->next->next->next = new ListNode(4);
    h->next->next->next->next = new ListNode(5);
    print_list(reverse_between(h, 2, 4));
}
