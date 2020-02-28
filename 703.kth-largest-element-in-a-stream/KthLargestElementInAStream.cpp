//
// Created by songkey on 2020/2/28.
//

#include "KthLargestElementInAStream.h"

bool KthLargestElementInAStream::init(int k, vector<int> &nums) {
    K = k;
    for(auto x: nums){
        add(x);
    }
}

int KthLargestElementInAStream::add(int val) {
    pq.push(val);
    if (pq.size() > K) pq.pop();
    return pq.top();
}

void KthLargestElementInAStream::run() {
    vector<int> vec = {4,5,8,2};
    init(3, vec);
    assert(add(3) == 4);
    assert(add(5) == 5);
    assert(add(10) == 5);
    assert(add(9) == 8);
    assert(add(4) == 8);
}
