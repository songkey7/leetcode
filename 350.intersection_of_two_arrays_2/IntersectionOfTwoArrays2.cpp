//
// Created by Qi Song on 17/04/2018.
//

#include "IntersectionOfTwoArrays2.h"

vector<int> IntersectionOfTwoArrays2::intersect(vector<int> &nums1, vector<int> &nums2) {
    unordered_map<int, int> num_map;
    vector<int> ret;
    for(auto x: nums1){
        num_map[x]++;
    }
    for(auto x: nums2){
        auto itr = num_map.find(x);
        if(itr != num_map.end() && itr->second > 0){
            ret.push_back(x);
            itr->second--;
        }
    }
    return ret;
}

void IntersectionOfTwoArrays2::run() {
    vector<int> v1 = {1,2,2,1};
    vector<int> v2 = {2,2};
    assert(intersect(v1, v2) == v2);
}
