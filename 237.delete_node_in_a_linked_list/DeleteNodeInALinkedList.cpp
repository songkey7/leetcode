//
// Created by Qi Song on 09/04/2018.
//

#include "DeleteNodeInALinkedList.h"

void DeleteNodeInALinkedList::delete_node(Base::ListNode *node) {
    *node = *(node->next);
}

void DeleteNodeInALinkedList::run() {
    ListNode * head = new ListNode(1);
    head->next = new ListNode(2);
    ListNode * node = new ListNode(3);
    head->next->next = node;
    head->next->next->next = new ListNode(4);
    print_list(head);
    delete_node(node);
    print_list(head);
}
