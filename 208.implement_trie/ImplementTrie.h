//
// Created by Qi Song on 2/2/18.
//

#ifndef LEETCODE_IMPLEMENTTRIE_H
#define LEETCODE_IMPLEMENTTRIE_H


#include "../Base.h"

class ImplementTrie: public Base {
    struct TreeNode{
        TreeNode *next_[26];
        bool leaf_;
        TreeNode(bool leaf = false): leaf_(leaf){
            memset(next_, 0, 26 * sizeof(TreeNode*));
        }
    };

    TreeNode * root;
    void insert(string word);
    bool search(string word);
    bool startsWith(string prefix);

public:
    ImplementTrie(){
        root = new TreeNode();
    }
    void run();
};


#endif //LEETCODE_IMPLEMENTTRIE_H
