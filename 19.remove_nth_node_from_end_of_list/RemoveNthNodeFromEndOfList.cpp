//
// Created by Qi Song on 09/03/2018.
//

#include "RemoveNthNodeFromEndOfList.h"

Base::ListNode *RemoveNthNodeFromEndOfList::remove_nth_from_end(Base::ListNode *head, int n) {
    queue <ListNode*> q;
    ListNode *p = head;
    int cnt = 0;
    while(p){
        if(cnt > n) q.pop();
        else cnt++;
        q.push(p);
        p = p->next;
    }
    if(cnt > n){
        p = q.front();
        q.pop();
        p->next = q.front()->next;
    } else if(cnt == n){
        return head->next;
    }
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
