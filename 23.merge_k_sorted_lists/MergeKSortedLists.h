//
// Created by Qi Song on 1/23/18.
//

#ifndef LEETCODE_MERGE_K_SORTEDLISTS_H
#define LEETCODE_MERGE_K_SORTEDLISTS_H


#include "../Base.h"

class MergeKSortedLists: public Base {
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };
    ListNode* merge_k_lists(vector<ListNode*>& lists);
    ListNode* merge_2_lists(ListNode* l1, ListNode* l2);
    ListNode* merge(vector<ListNode*>& lists, int l, int r);
public:
    void run();
};


#endif //LEETCODE_MERGE_K_SORTEDLISTS_H
