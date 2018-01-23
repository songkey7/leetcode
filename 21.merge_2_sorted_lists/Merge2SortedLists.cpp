//
// Created by Qi Song on 1/23/18.
//

#include "Merge2SortedLists.h"

Merge2SortedLists::ListNode * Merge2SortedLists::merge_2_lists(ListNode *l1, ListNode *l2) {
    if(!l1) return l2;
    if(!l2) return l1;
    ListNode * h = new ListNode(0);
    ListNode * p = h;
    while(l1 && l2){
        if(l1->val < l2->val) {
           p->next = l1;
           l1 = l1->next;
        } else{
           p->next = l2;
           l2 = l2->next;
        }
        p = p->next;
    }
    if(l1) p->next = l1;
    if(l2) p->next = l2;
    return h->next;
}

void Merge2SortedLists::run() {
    ListNode * l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);
    ListNode * l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);
    ListNode * l = merge_2_lists(l1, l2);
    while(l){
        cout << l->val << " ";
        l = l->next;
    }
}
