//
// Created by Qi Song on 1/23/18.
//

#ifndef LEETCODE_MERGE_K_SORTEDLISTS_H
#define LEETCODE_MERGE_K_SORTEDLISTS_H


#include "../Base.h"

class MergeKSortedLists: public Base {
    ListNode* merge_k_lists(vector<ListNode*>& lists);
    ListNode* merge_2_lists(ListNode* l1, ListNode* l2);
    ListNode* merge(vector<ListNode*>& lists, int l, int r);
    static bool cmp(ListNode* a, ListNode* b){return a->val > b->val;}
public:
    void run();
};


#endif //LEETCODE_MERGE_K_SORTEDLISTS_H
