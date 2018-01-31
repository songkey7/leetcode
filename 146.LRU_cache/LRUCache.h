//
// Created by Qi Song on 1/31/18.
//

#ifndef LEETCODE_LRUCACHE_H
#define LEETCODE_LRUCACHE_H


#include "../Base.h"

class LRUCache: public Base {
    list<int> que; // key
    unordered_map<int, pair<int, list<int>::iterator>> index_map; // key -> (value, itr)
    int capacity;
    int cnt;
    int get(int key);
    void put(int key, int value);

public:
    explicit LRUCache(int c): capacity(c), cnt(0) {}
    LRUCache() = default;

    void run() override;
};


#endif //LEETCODE_LRUCACHE_H
