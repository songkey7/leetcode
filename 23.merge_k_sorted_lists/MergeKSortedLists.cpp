//
// Created by Qi Song on 1/23/18.
//

#include "MergeKSortedLists.h"

MergeKSortedLists::ListNode * MergeKSortedLists::merge_k_lists(vector<ListNode*>& lists) {
    int n = lists.size();
    if(n == 0) return nullptr;
    return merge(lists, 0, n - 1);
}

MergeKSortedLists::ListNode * MergeKSortedLists::merge(vector<ListNode *> &lists, int l, int r) {
    while(l < r){
        int m = (l + r) / 2;
        return merge_2_lists(merge(lists, l, m), merge(lists, m+1, r));
    }
    return lists[l];
}

MergeKSortedLists::ListNode * MergeKSortedLists::merge_2_lists(ListNode *l1, ListNode *l2) {
    ListNode * h = new ListNode(0);
    ListNode * p = h;
    while(l1 && l2) {
        if(l1->val < l2->val){
            p->next = l1;
            l1 = l1->next;
        } else{
            p->next = l2;
            l2 = l2->next;
        }
        p = p->next;
    }
    if(l1) p->next = l1;
    if(l2) p->next = l2;
    return h->next;
}


void MergeKSortedLists::run() {
    ListNode * l1 = new ListNode(1);
    l1->next = new ListNode(2);
    l1->next->next = new ListNode(4);
    ListNode * l2 = new ListNode(1);
    l2->next = new ListNode(3);
    l2->next->next = new ListNode(4);
    vector<ListNode *> l = {l1, l2};
    ListNode * ret = merge_k_lists(l);
    while(ret){
        cout << ret->val << " ";
        ret = ret->next;
    }
}
