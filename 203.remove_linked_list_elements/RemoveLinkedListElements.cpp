//
// Created by Qi Song on 11/07/2018.
//

#include "RemoveLinkedListElements.h"

Base::ListNode *RemoveLinkedListElements::remove_elements(Base::ListNode *head, int val) {
    ListNode * h = new ListNode(0);
    h->next = head;
    ListNode * pre = h;
    ListNode * cur = head;
    while(cur){
        if(cur->val == val){
            pre->next = cur->next;
        }
        else {
            pre = cur;
        }
        cur = cur->next;
    }
    return h->next;
}

void RemoveLinkedListElements::run() {
    ListNode * head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(6);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next->next = new ListNode(6);
    print_list(remove_elements(head, 6));
}
