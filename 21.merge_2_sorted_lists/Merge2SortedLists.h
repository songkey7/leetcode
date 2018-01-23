//
// Created by Qi Song on 1/23/18.
//

#ifndef LEETCODE_MERGE2SORTEDLISTS_H
#define LEETCODE_MERGE2SORTEDLISTS_H


#include "../Base.h"

class Merge2SortedLists: public Base {
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };
    ListNode* merge_2_lists(ListNode* l1, ListNode* l2);
public:
    void run();

};


#endif //LEETCODE_MERGE2SORTEDLISTS_H
