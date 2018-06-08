//
// Created by Qi Song on 07/06/2018.
//

#include "RemoveDuplicatesFromSortedList2.h"

Base::ListNode *RemoveDuplicatesFromSortedList2::delete_duplicates(ListNode *head) {
    if(!head || !head->next) return head;
    ListNode * h = new ListNode(0);
    h->next = head;
    ListNode * p1 = head, *p2 = head->next, * pre = h;
    int cnt = 1;
    while(p2){
        if(pre->next->val == p2->val){
            cnt++;
        }
        else{
            if(cnt > 1){
                pre->next = p2;
            }
            else{
                pre = p1;
            }
            cnt = 1;
        }
        p1 = p2;
        p2 = p2->next;
    }
    if(cnt > 1) pre->next = nullptr;
    return h->next;
}

void RemoveDuplicatesFromSortedList2::run() {
    ListNode *h1 = new ListNode(1);
    h1->next = new ListNode(2);
    h1->next->next = new ListNode(3);
    h1->next->next->next = new ListNode(3);
    h1->next->next->next->next = new ListNode(4);
    h1->next->next->next->next->next = new ListNode(4);
    h1->next->next->next->next->next->next = new ListNode(5);
    print_list(h1);
    print_list(delete_duplicates(h1));

    ListNode *h2 = new ListNode(1);
    h2->next = new ListNode(1);
    h2->next->next = new ListNode(1);
    h2->next->next->next = new ListNode(2);
    h2->next->next->next->next = new ListNode(3);
    print_list(h2);
    print_list(delete_duplicates(h2));
}

