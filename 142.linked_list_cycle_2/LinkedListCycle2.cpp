//
// Created by Qi Song on 1/10/18.
//

#include "LinkedListCycle2.h"

Base::ListNode * LinkedListCycle2::detectCycle(ListNode *head) {
    if(!head || !head->next) return nullptr;
    ListNode * p1 = head, * p2 = head;
    while(p2 && p2->next){
        p1 = p1->next;
        p2 = p2->next->next;
        if(p1 == p2){
            p2 = head;
            while(p1 != p2){
                p1 = p1->next;
                p2 = p2->next;
            }
            return p1;
        }
    }
    return nullptr;
}

Base::ListNode * LinkedListCycle2::detectCycle2(ListNode *head) {
    unordered_set<ListNode*> s;
    while (head){
        if(s.find(head) != s.end()){
            return head;
        }
        s.insert(head);
        head = head->next;
    }
    return NULL;
}

Base::ListNode* LinkedListCycle2::create_list() {
    ListNode * h = new ListNode(1);
    ListNode * p2 = new ListNode(2);
    ListNode * p3 = new ListNode(3);
    ListNode * p4 = new ListNode(4);
    ListNode * p5 = new ListNode(5);
    ListNode * p6 = new ListNode(6);
    h->next = p2;
    p2->next = p3;
    p3->next = p4;
    p4->next = p5;
    p5->next = p6;
    p6->next = p3;
    return h;
}

void LinkedListCycle2::run() {
    ListNode * h = create_list();
    assert(detectCycle(h) == h->next->next);
    assert(detectCycle2(h) == h->next->next);
}