//
// Created by Qi Song on 19/07/2018.
//

#include "AddAndSearchWord.h"

void AddAndSearchWord::WordDictionary::add_word(string word) {
    int n = word.length();
    TrieNode * p = trie;
    for (int i = 0; i < n; ++i) {
        int c = word[i] - 'a';
        if(!p->next[c]){
            p->next[c] = new TrieNode();
        }
        p = p->next[c];
        if(i == n - 1) p->leaf = true;
    }
}

bool AddAndSearchWord::WordDictionary::search(string word) {
    return search(word, 0, word.length(), trie);
}

bool
AddAndSearchWord::WordDictionary::search(string word, int i, int n, AddAndSearchWord::WordDictionary::TrieNode *pNode) {
    if(i == n) return pNode->leaf;
    if(word[i] == '.'){
        for(auto p: pNode->next){
            if(p && search(word, i + 1, n, p)) return true;
        }
    }
    else {
        int c = word[i] - 'a';
        if(pNode->next[c] && search(word, i + 1, n, pNode->next[c])) return true;
    }
    return false;
}

void AddAndSearchWord::run() {
    WordDictionary obj;
    obj.add_word("bad");
    obj.add_word("dad");
    obj.add_word("mad");
    assert(!obj.search("pad"));
    assert(obj.search("bad"));
    assert(obj.search(".ad"));
    assert(obj.search("b.."));
}
