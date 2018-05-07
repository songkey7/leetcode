//
// Created by Qi Song on 09/03/2018.
//

#include "RemoveNthNodeFromEndOfList.h"

Base::ListNode *RemoveNthNodeFromEndOfList::remove_nth_from_end(Base::ListNode *head, int n) {
    vector<ListNode*> vec;
    ListNode *p = head;
    while(p){
        vec.push_back(p);
        p = p->next;
    }
    int k = vec.size() - n;
    if(k == 0) return head->next;
    else if(k > 0) vec[k - 1]->next = vec[k]->next;
    return head;
}

void RemoveNthNodeFromEndOfList::print(ListNode * head) {
    while(head){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void RemoveNthNodeFromEndOfList::run() {
    ListNode * head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    print(head);
    print(remove_nth_from_end(head, 2));
}
