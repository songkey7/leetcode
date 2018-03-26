//
// Created by Qi Song on 26/03/2018.
//

#include "FourSum2.h"

int FourSum2::four_sum_count(vector<int> &A, vector<int> &B, vector<int> &C, vector<int> &D) {
    unordered_map<int, int> t_map;
    for(auto a: A){
        for(auto b: B){
            t_map[0 - a - b]++;
        }
    }

    int ret = 0;
    for(auto c: C){
        for(auto d: D){
            int key = c + d;
            auto itr = t_map.find(key);
            if(itr != t_map.end()){
                ret += itr->second;
            }
        }
    }
    return ret;
}

void FourSum2::run() {
    vector<int> A = { 1, 2};
    vector<int> B = {-2,-1};
    vector<int> C = {-1, 2};
    vector<int> D = { 0, 2};
    assert(four_sum_count(A, B, C, D) == 2);

}
