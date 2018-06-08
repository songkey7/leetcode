//
// Created by Qi Song on 08/06/2018.
//

#ifndef LEETCODE_CONVERTSORTEDLISTTOBINARYSEARCHTREE_H
#define LEETCODE_CONVERTSORTEDLISTTOBINARYSEARCHTREE_H


#include "../Base.h"

class ConvertSortedListToBinarySearchTree: public Base {
    TreeNode* sorted_list_to_BST(ListNode* head);
    TreeNode* dfs(ListNode * head, ListNode * tail);
public:
    void run();
};


#endif //LEETCODE_CONVERTSORTEDLISTTOBINARYSEARCHTREE_H
