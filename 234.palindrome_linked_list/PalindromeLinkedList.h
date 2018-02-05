//
// Created by Qi Song on 2/5/18.
//

#ifndef LEETCODE_PALINDROMELINKEDLIST_H
#define LEETCODE_PALINDROMELINKEDLIST_H


#include "../Base.h"

class PalindromeLinkedList : public Base{

    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };
    bool is_palindrome(ListNode* head);
public:
    void run();
};


#endif //LEETCODE_PALINDROMELINKEDLIST_H
