//
// Created by songkey on 2020/2/28.
//

#include "MaxConsecutiveOnes.h"


int MaxConsecutiveOnes::findMaxConsecutiveOnes(vector<int> &nums) {
    int ret = 0, len = 0;
    for (int num : nums) {
        len = num ? num + len: 0;
        ret = max(ret, len);
    }
    return ret;
}

void MaxConsecutiveOnes::run() {
    vector<int> vec = {1,1,0,1,1,1};
    assert(findMaxConsecutiveOnes(vec) == 3);
}
