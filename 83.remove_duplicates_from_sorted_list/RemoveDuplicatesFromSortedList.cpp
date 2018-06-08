//
// Created by Qi Song on 07/06/2018.
//

#include "RemoveDuplicatesFromSortedList.h"

Base::ListNode *RemoveDuplicatesFromSortedList::delete_duplicates(ListNode *head) {
    if(!head) return head;
    ListNode * p1 = head, *p2 = head->next;
    while(p2){
        if(p2->val == p1->val){
            ListNode *p = p2;
            p2 = p2->next;
            free(p);
        }
        else{
            p1->next = p2;
            p1 = p1->next;
            p2 = p2->next;
        }
    }
    p1->next = nullptr;
    return head;
}

void RemoveDuplicatesFromSortedList::run() {
    ListNode * h1 = new ListNode(1);
    h1->next = new ListNode(1);
    h1->next->next = new ListNode(2);
    print_list(h1);
    print_list(delete_duplicates(h1));

    ListNode * h2 = new ListNode(1);
    h2->next = new ListNode(1);
    h2->next->next = new ListNode(2);
    h2->next->next->next = new ListNode(3);
    h2->next->next->next->next = new ListNode(3);
    print_list(h2);
    print_list(delete_duplicates(h2));
}
