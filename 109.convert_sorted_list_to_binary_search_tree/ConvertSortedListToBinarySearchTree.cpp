//
// Created by Qi Song on 08/06/2018.
//

#include "ConvertSortedListToBinarySearchTree.h"

Base::TreeNode *ConvertSortedListToBinarySearchTree::sorted_list_to_BST(ListNode *head) {
    return dfs(head, nullptr);
}

Base::TreeNode *ConvertSortedListToBinarySearchTree::dfs(ListNode * head, ListNode * tail) {
    if(head == tail) return nullptr;
    ListNode * p1 = head, * p2 = head;
    while(p2 != tail && p2->next != tail){
        p1 = p1->next;
        p2 = p2->next->next;
    }

    TreeNode * root = new TreeNode(p1->val);
    root->left = dfs(head, p1);
    root->right = dfs(p1->next, tail);
    return root;
}

void ConvertSortedListToBinarySearchTree::run() {
    ListNode * h = new ListNode(-10);
    h->next = new ListNode(-3);
    h->next->next = new ListNode(0);
    h->next->next->next = new ListNode(5);
    h->next->next->next->next = new ListNode(9);
    print_list(h);
    print_tree(sorted_list_to_BST(h));
}


