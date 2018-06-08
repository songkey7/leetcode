//
// Created by Qi Song on 04/04/2018.
//

#include "CopyListWithRandomPointer.h"

CopyListWithRandomPointer::RandomListNode *
CopyListWithRandomPointer::copy_random_list(RandomListNode *head) {
    unordered_map<RandomListNode*, RandomListNode*> mapping;
    RandomListNode * h = new RandomListNode(0);
    RandomListNode * p1 = head, * p2 = h;
    while(p1){
        p2->next = new RandomListNode(p1->label);
        mapping[p1] = p2->next;
        p1 = p1->next;
        p2 = p2->next;
    }
    p1 = head;
    p2 = h->next;
    while(p1){
        if(p1->random){
            p2->random = mapping[p1->random];
        }
        p1 = p1->next;
        p2 = p2->next;
    }
    return h->next;
}

void CopyListWithRandomPointer::print(CopyListWithRandomPointer::RandomListNode *head) {
    while(head){
        cout << head->label << "," << (head->random ? head->random->label : 0) << " ";
        head = head->next;
    }
    cout << endl << endl;
}

void CopyListWithRandomPointer::run() {
    RandomListNode * root = new RandomListNode(1);
    root->next = new RandomListNode(2);
    root->next->random = root->next;
    root->random = root;
    print(root);
    print(copy_random_list(root));
}


