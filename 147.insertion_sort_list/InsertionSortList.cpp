//
// Created by Qi Song on 08/06/2018.
//

#include "InsertionSortList.h"

Base::ListNode *InsertionSortList::insertion_sort_list(ListNode *head) {
    if(!head || !head->next) return head;
    ListNode * h = new ListNode(INT_MIN);
    h->next = head;
    for(ListNode * cur = head->next, * tail = head, *next; cur; cur = next){
        next = cur->next;
        ListNode * pre = h;
        while(pre->next->val < cur->val) pre = pre->next;
        if(pre->next == cur){
            tail = cur;
            continue;
        }
        ListNode * beg = pre->next;
        pre->next = cur;
        cur->next = beg;
        tail->next = next;
    }
    return h->next;
}

void InsertionSortList::run() {
    ListNode *h1 = new ListNode(4);
    h1->next = new ListNode(2);
    h1->next->next = new ListNode(1);
    h1->next->next->next = new ListNode(3);
    print_list(insertion_sort_list(h1));

    ListNode *h2 = new ListNode(-1);
    h2->next = new ListNode(5);
    h2->next->next = new ListNode(3);
    h2->next->next->next = new ListNode(4);
    h2->next->next->next->next = new ListNode(0);
    print_list(insertion_sort_list(h2));
}
