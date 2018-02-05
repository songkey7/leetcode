//
// Created by Qi Song on 2/5/18.
//

#include "PalindromeLinkedList.h"

bool PalindromeLinkedList::is_palindrome(PalindromeLinkedList::ListNode *head) {
    if(!head)
        return true;

    ListNode *p = head;
    int cnt = 0;
    while(p){
        p = p->next;
        cnt ++;
    }

    ListNode *pre = head;
    p = pre->next;
    pre->next = nullptr;
    int cnt2 = cnt / 2 - 1;
    while(p && p->next && cnt2 > 0){
        ListNode * h = p->next;
        p->next = pre;
        pre = p;
        p = h;
        cnt2--;
    }
    if(cnt % 2 == 1 && p) p = p->next;
    while(p && pre){
        if(p->val != pre->val) return false;
        pre = pre->next;
        p = p->next;
    }

    return true;
}

void PalindromeLinkedList::run() {
    ListNode * h1 = new ListNode(1);
    h1->next = new ListNode(2);
    h1->next->next = new ListNode(1);
    assert(is_palindrome(h1));
    ListNode * h2 = new ListNode(1);
    h2->next = new ListNode(1);
    assert(is_palindrome(h2));
    ListNode * h3 = new ListNode(1);
    h3->next = new ListNode(2);
    h3->next->next = new ListNode(3);
    assert(!is_palindrome(h3));
}
