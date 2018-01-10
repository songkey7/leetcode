//
// Created by Qi Song on 1/10/18.
//

#include "SortList.h"

SortList::ListNode * SortList::merge(ListNode *p1, ListNode *p2) {
    ListNode* h = NULL;
    ListNode* p = NULL;
    while(p1 && p2){
        if(p1->val <= p2->val){
            if(!h) {
                h = p = p1;
                p1 = p1->next;
            } else{
                p->next = p1;
                p = p->next;
                p1 = p1->next;
            }
        } else{
            if(!h) {
                h = p = p2;
                p2 = p2->next;
            } else {
                p->next = p2;
                p = p->next;
                p2 = p2->next;
            }
        }
    }
    p->next = p1 ? p1 : p2;
    return h;
}

SortList::ListNode * SortList::sort_list(ListNode *head) {
    if(!head || !head->next) return head;
    ListNode *p1 = head;
    ListNode *p2 = head;
    ListNode *p = head;
    while(p2 && p2->next){
        p = p1;
        p1 = p1->next;
        p2 = p2->next->next;
    }
    p->next = NULL;
    p2 = sort_list(head);
    p1 = sort_list(p1);
    return merge(p1, p2);
}

SortList::ListNode* SortList::create_list() {
    ListNode * h = new ListNode(4);
    ListNode * p2 = new ListNode(1);
    ListNode * p3 = new ListNode(3);
    ListNode * p4 = new ListNode(8);
    ListNode * p5 = new ListNode(5);
    ListNode * p6 = new ListNode(6);
    h->next = p2;
    p2->next = p3;
    p3->next = p4;
    p4->next = p5;
    p5->next = p6;
    return h;
}

void SortList::run() {
    ListNode *h = create_list();
    ListNode* p = h;
    while(p){
        cout << p->val << " ";
        p=p->next;
    }
    cout << endl;
    h = sort_list(h);
    p = h;
    while(p){
        cout << p->val << " ";
        p=p->next;
    }
}