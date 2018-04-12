//
// Created by Qi Song on 12/04/2018.
//

#include "IncreasingTripletSubsequence.h"

bool IncreasingTripletSubsequence::increasing_triplet(vector<int> &nums) {
    int t1 = INT_MAX, t2 = INT_MAX;
    for(auto x: nums){
        if(x < t1){
            t1 = x;
        }
        else if(x <= t2){
            t2 = x;
        }
        else{
            return true;
        }
    }
    return false;
}

void IncreasingTripletSubsequence::run() {
    vector<int> nums1 = {1,2,3,4,5};
    assert(increasing_triplet(nums1));

    vector<int> nums2 = {5,4,3,2,1};
    assert(!increasing_triplet(nums2));
}


