//
// Created by Qi Song on 1/30/18.
//

#include "QueueReconstructionByHeight.h"

vector<pair<int, int>> QueueReconstructionByHeight::reconstruct_queue(vector<pair<int, int>> &people) {
    sort(people.begin(), people.end(), comp);
    vector<pair<int, int>> ret;
    for(auto x: people){
        int h = x.first;
        int k = x.second;
        int cnt = 0;
        for(auto itr = ret.begin(); itr != ret.end(); itr++){
            if(h <= (*itr).first) cnt++;
            if(cnt > k) {
                ret.insert(itr, make_pair(h, k));
                break;
            }
        }
        if(cnt <= k){
            ret.emplace_back(h, k);
        }
    }
    return ret;
}

void QueueReconstructionByHeight::run() {
    vector<pair<int, int>> people = {make_pair(7,0), make_pair(4,4), make_pair(7,1), make_pair(5,0), make_pair(6,1), make_pair(5,2)};
    vector<pair<int, int>> rst = {make_pair(5,0), make_pair(7,0), make_pair(5,2), make_pair(6,1), make_pair(4,4), make_pair(7,1)};
    assert(reconstruct_queue(people) == rst);
}
