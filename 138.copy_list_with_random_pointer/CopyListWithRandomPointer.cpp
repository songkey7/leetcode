//
// Created by Qi Song on 04/04/2018.
//

#include "CopyListWithRandomPointer.h"

CopyListWithRandomPointer::RandomListNode *
CopyListWithRandomPointer::copy_random_list(RandomListNode *head) {
    unordered_map<RandomListNode *, int> idx_map;
    vector<RandomListNode *> random_map;
    int i = 0;
    RandomListNode * ret = nullptr, *p = nullptr, *pp = head;
    while(pp){
        auto * tmp = new RandomListNode(pp->label);
        if(!ret){
            ret = p = tmp;
        } else {
            p->next = tmp;
            p = tmp;
        }
        idx_map[pp] = i++;
        random_map.push_back(tmp);
        pp= pp->next;
    }
    pp = head;
    p = ret;
    while(pp){
        if(pp->random) p->random = random_map[idx_map[pp->random]];
        else p->random = nullptr;
        pp = pp->next;
        p = p->next;
    }
    return ret;
}

void CopyListWithRandomPointer::print(CopyListWithRandomPointer::RandomListNode *head) {
    while(head){
        cout << head->label << " " << (head->random ? head->random->label : 0) << endl;
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


