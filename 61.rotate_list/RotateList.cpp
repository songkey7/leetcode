//
// Created by Qi Song on 09/05/2018.
//

#include "RotateList.h"

Base::ListNode *RotateList::rotate_right(Base::ListNode *head, int k) {
    if(!head ||!head->next) return head;
    int n = 1;
    ListNode *p = head;
    while(p && p->next){
        n++;
        p = p->next;
    }
    p->next = head;
    k = n - (k % n);
    while(k--) p = p->next;
    head = p->next;
    p->next = nullptr;
    return head;
}

void RotateList::run() {
    ListNode * head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);
    head1->next->next->next = new ListNode(4);
    head1->next->next->next->next = new ListNode(5);
    print_list(head1);
    print_list(rotate_right(head1, 2));

    ListNode * head2 = new ListNode(0);
    head2->next = new ListNode(1);
    head2->next->next = new ListNode(2);
    print_list(head2);
    print_list(rotate_right(head2, 4));
}

