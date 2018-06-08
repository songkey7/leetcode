//
// Created by Qi Song on 1/10/18.
//

#include "SortList.h"

SortList::ListNode * SortList::merge(ListNode *p1, ListNode *p2) {
    ListNode * h = new ListNode(0);
    ListNode * p = h;
    while(p1 && p2){
        if(p1->val <= p2->val){
            p->next = p1;
            p1 = p1->next;
        }
        else{
            p->next = p2;
            p2 = p2->next;
        }
        p = p->next;
    }
    if(p1) p->next = p1;
    if(p2) p->next = p2;
    return h->next;
}

SortList::ListNode * SortList::sort_list(ListNode *head) {
    if(!head || !head->next) return head;
    ListNode * h = new ListNode(0);
    h->next = head;
    ListNode * p1 = h, * p2 = h;
    while(p2 && p2->next){
        p1 = p1->next;
        p2 = p2->next->next;
    }
    ListNode * p = p1;
    p1 = p1->next;
    p->next = nullptr;
    return merge(sort_list(head), sort_list(p1));
}

void SortList::run() {
    ListNode * h = new ListNode(4);
    h->next = new ListNode(1);
    h->next->next = new ListNode(3);
    h->next->next->next = new ListNode(8);
    h->next->next->next->next = new ListNode(5);
    h->next->next->next->next->next = new ListNode(6);
    print_list(sort_list(h));
}