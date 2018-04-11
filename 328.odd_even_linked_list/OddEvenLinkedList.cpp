//
// Created by Qi Song on 11/04/2018.
//

#include "OddEvenLinkedList.h"

Base::ListNode *OddEvenLinkedList::odd_even_list(Base::ListNode *head) {
    if(!head) return head;
    ListNode * h1 = head, * p1 = h1;
    ListNode * h2 = head->next, * p2 = h2;

    while(p2 && p2->next){
        p1->next = p2->next;
        p1 = p1->next;
        p2->next = p1->next;
        p2 = p2->next;
    }
    p1->next = h2;
    return h1;
}

void OddEvenLinkedList::run() {
    ListNode * head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    print_list(odd_even_list(head));
}
