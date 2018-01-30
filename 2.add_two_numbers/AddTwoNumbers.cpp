//
// Created by Qi Song on 1/30/18.
//

#include "AddTwoNumbers.h"

AddTwoNumbers::ListNode * AddTwoNumbers::add_two_numbers(ListNode *l1, ListNode *l2) {
    if(!l1 && !l2) return nullptr;
    if(!l1) return l2;
    if(!l2) return l1;

    int carry = 0;
    int x = 0;
    auto * h = new ListNode(0);
    ListNode * p = h;
    while(l1 || l2){
        x = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
        p->next = new ListNode(x%10);
        p = p->next;
        carry = x / 10;
        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
    }
    if(carry) p->next = new ListNode(carry);

    return h->next;
}

void AddTwoNumbers::run() {
    auto * l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    auto * l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    auto * l = new ListNode(7);
    l->next = new ListNode(0);
    l->next->next = new ListNode(8);
    auto * ret = add_two_numbers(l1, l2);

    while(l){
        cout << l->val << " ";
        l = l->next;
    }
    cout << endl;

    while(ret){
        cout << ret->val << " ";
        ret = ret->next;
    }
    cout << endl;
}