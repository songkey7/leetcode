//
// Created by Qi Song on 21/03/2018.
//

#include "ReverseLinkedList.h"

Base::ListNode *ReverseLinkedList::reverse_list(Base::ListNode *head) {
    ListNode * pre = nullptr;
    while(head){
        ListNode * p = head->next;
        head->next = pre;
        pre = head;
        head = p;
    }
    return pre;
}

void ReverseLinkedList::run() {
    ListNode * head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    print_list(head);
    print_list(reverse_list(head));
}
