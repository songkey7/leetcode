//
// Created by Qi Song on 25/07/2018.
//

#include "SortCharactersByFrequency.h"

string SortCharactersByFrequency::frequency_sort(string s) {
    string ret;
    unordered_map<char, int> c_map;
    for(auto c: s) c_map[c]++;
    priority_queue<pair<int, char>> q;
    for(auto x: c_map){
        q.push({x.second, x.first});
    }
    while(!q.empty()){
        auto x = q.top();
        for (int i = 0; i < x.first; ++i) {
            ret.push_back(x.second);
        }
        q.pop();
    }
    return ret;
}

void SortCharactersByFrequency::run() {
    assert(frequency_sort("tree") == "eetr");
    assert(frequency_sort("Aabb") == "bbaA");
}
