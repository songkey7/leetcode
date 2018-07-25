//
// Created by Qi Song on 19/07/2018.
//

#ifndef LEETCODE_ADDANDSEARCHWORD_H
#define LEETCODE_ADDANDSEARCHWORD_H


#include "../Base.h"

class AddAndSearchWord: public Base {
    class WordDictionary {
        class TrieNode{
        public:
            TrieNode * next[26] = {nullptr};
            bool leaf;
            TrieNode(){
                leaf = false;
            }
        };
        TrieNode *trie;
    public:
        /** Initialize your data structure here. */
        WordDictionary() {
            trie = new TrieNode();
        }

        /** Adds a word into the data structure. */
        void add_word(string word);

        /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
        bool search(string word);

        bool search(string word, int i, int n, TrieNode *pNode);
    };

public:
    void run();
};


#endif //LEETCODE_ADDANDSEARCHWORD_H
