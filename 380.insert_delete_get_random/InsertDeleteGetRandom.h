//
// Created by Qi Song on 18/04/2018.
//

#ifndef LEETCODE_INSERTDELETEGETRANDOM_H
#define LEETCODE_INSERTDELETEGETRANDOM_H


#include "../Base.h"

class InsertDeleteGetRandom: public Base {
    class RandomizedSet {
    public:
        vector<int> _vec;
        unordered_map<int, size_t> _map;
        /** Initialize your data structure here. */
        RandomizedSet() {
        }

        /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
        bool insert(int val) {
            auto itr = _map.find(val);
            if(itr != _map.end()) return false;
            _map[val] = _vec.size();
            _vec.push_back(val);
            return true;
        }

        /** Removes a value from the set. Returns true if the set contained the specified element. */
        bool remove(int val) {
            auto itr = _map.find(val);
            if(itr == _map.end()) return false;
            _map[_vec.back()] = itr->second;
            swap(_vec[itr->second], _vec.back());
            _vec.pop_back();
            _map.erase(itr);
            return true;
        }

        /** Get a random element from the set. */
        int getRandom() {
            return _vec[rand() % _vec.size()];
        }
    };
public:
    void run();
};


#endif //LEETCODE_INSERTDELETEGETRANDOM_H
