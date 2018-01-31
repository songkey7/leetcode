//
// Created by Qi Song on 1/31/18.
//

#include "LRUCache.h"

int LRUCache::get(int key) {
    auto itr = index_map.find(key);
    if(itr != index_map.end()){
        que.erase(itr->second.second);
        que.push_front(key);
        itr->second.second = que.begin();
        return itr->second.first;
    }
    else {
        return -1;
    }
}

void LRUCache::put(int key, int value) {
    auto itr = index_map.find(key);
    if(itr != index_map.end()){
        que.erase(itr->second.second);
        que.push_front(key);
        itr->second.second = que.begin();
    }
    else {
        if(index_map.size() == capacity){
            index_map.erase(que.back());
            que.pop_back();
        }
        que.push_front(key);
    }
    index_map[key] = make_pair(value, que.begin());
}

void LRUCache::run() {
    LRUCache cache(2);
    cache.put(1, 1);
    cache.put(2, 2);
    assert(cache.get(1) == 1);
    cache.put(3, 3);
    assert(cache.get(2) == -1);
    cache.put(4, 4);
    assert(cache.get(1) == -1);
    assert(cache.get(3) == 3);
    assert(cache.get(4) == 4);

    LRUCache cache2(1);
    cache2.put(2, 1);
    assert(cache2.get(2) == 1);
}