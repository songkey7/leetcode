//
// Created by Qi Song on 14/05/2018.
//

#include "PartitionList.h"

Base::ListNode *PartitionList::partition(Base::ListNode *head, int x) {
    ListNode *h1 = new ListNode(0), *h2 = new ListNode(0);
    ListNode *p1 = h1, *p2 = h2;
    while(head){
        if(head->val < x){
            p1->next = head;
            p1 = p1->next;
        }
        else{
            p2->next = head;
            p2 = p2->next;
        }
        head = head->next;
    }
    p2->next = nullptr;
    p1->next = h2->next;
    return h1->next;
}

void PartitionList::run() {
    //Input: head = 1->4->3->2->5->2, x = 3
    ListNode * head = new ListNode(1);
    head->next = new ListNode(4);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(2);
    print_list(head);

    //Output: 1->2->2->4->3->5
    print_list(partition(head, 3));
}
