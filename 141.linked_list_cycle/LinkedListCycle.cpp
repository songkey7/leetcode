//
// Created by Qi Song on 1/10/18.
//

#include "LinkedListCycle.h"

class ListNode;

bool LinkedListCycle::has_cycle(ListNode *head) {
    if(!head || !head->next) return false;
    ListNode *p1 = head;
    ListNode *p2 = head->next->next;
    while(p2 && p2->next){
        if(p1 == p2) return true;
        p1 = p1->next;
        p2 = p2->next->next;
    }
    return false;
}

bool LinkedListCycle::has_cycle2(ListNode *head) {
    unordered_set<ListNode*> s;
    while(head){
        if(s.find(head) != s.end()){
            return true;
        }
        s.insert(head);
        head = head->next;
    }
    return false;
}

LinkedListCycle::ListNode* LinkedListCycle::create_list() {
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

void LinkedListCycle::run() {
    ListNode * h = create_list();
    assert(has_cycle(h));
    assert(has_cycle2(h));
}
