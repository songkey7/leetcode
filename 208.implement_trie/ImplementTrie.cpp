//
// Created by Qi Song on 2/2/18.
//

#include "ImplementTrie.h"

void ImplementTrie::insert(string word) {
    if(word.empty()) return;
    TreeNode *p = root;
    for(int i = 0; i < word.length(); i++){
        char c = word[i] - 'a';
        bool flag = (i == word.length() - 1);
        if(!p->next_[c]){
            p->next_[c] = new TreeNode(flag);
        }
        else{
            p->next_[c]->leaf_ |= flag;
        }
        p = p->next_[c];
    }
}

bool ImplementTrie::search(string word) {
    TreeNode *p = root;
    for(int i = 0; i < word.length(); i++){
        char c = word[i] - 'a';
        if(!p->next_[c]) return false;
        if(i == word.length() - 1 && p->next_[c]->leaf_) return true;
        p = p->next_[c];
    }
    return false;
}

bool ImplementTrie::startsWith(string prefix) {
    TreeNode *p = root;
    for (char i : prefix) {
        char c = i - 'a';
        if(!p->next_[c]) return false;
        p = p->next_[c];
    }
    return true;
}

void ImplementTrie::run() {
    ImplementTrie trie;
    trie.insert("app");
    trie.insert("apple");
    assert(!trie.search("apps"));
    assert(trie.search("app"));

    trie.insert("ab");
    assert(!trie.search("a"));
    assert(trie.startsWith("a"));
}
