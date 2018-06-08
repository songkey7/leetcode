//
// Created by Qi Song on 1/30/18.
//

#include "AddTwoNumbers.h"

Base::ListNode * AddTwoNumbers::add_two_numbers(ListNode *l1, ListNode *l2) {
    if(!l1) return l2;
    if(!l2) return l1;
    int carry = 0;
    ListNode * h = new ListNode(0);
    ListNode * p = h;
    while(l1 || l2){
        int tmp = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        carry = tmp / 10;
        p->next = new ListNode(tmp % 10);
        p = p->next;
        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
    }
    if(carry) p->next = new ListNode(carry);
    return h->next;
}

void AddTwoNumbers::run() {
    ListNode * l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    ListNode * l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    print_list(l1);
    print_list(l2);
    print_list(add_two_numbers(l1, l2));

}