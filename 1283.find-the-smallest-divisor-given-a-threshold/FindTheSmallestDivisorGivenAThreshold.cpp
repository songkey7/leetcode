//
// Created by songkey on 2020/3/30.
//

#include "FindTheSmallestDivisorGivenAThreshold.h"

int FindTheSmallestDivisorGivenAThreshold::smallestDivisor(vector<int> nums, int threshold) {
    int i = 1, j = 1e6;
    while(i < j) {
        int m = (i + j) / 2;
        int t = sum(nums, m);
        if(t > threshold) i = m + 1;
        else {
            j = m;
        }
    }
    return j;
}

int FindTheSmallestDivisorGivenAThreshold::sum(vector<int> &nums, int m) {
    int ret = 0;
    for(auto x: nums) {
        ret += ceil(x * 1.0 / m);
    }
    return ret;
}


void FindTheSmallestDivisorGivenAThreshold::run() {
    assert(smallestDivisor({1,2,5,9}, 6) == 5);
    assert(smallestDivisor({2,3,5,7,11}, 11) == 3);
    assert(smallestDivisor({19}, 5) == 4);
}


