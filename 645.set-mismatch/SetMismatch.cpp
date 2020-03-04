//
// Created by songkey on 2020/3/4.
//

#include "SetMismatch.h"

vector<int> SetMismatch::findErrorNums(vector<int>& nums) {
    size_t n = nums.size();
    int sum = (1 + n) * n / 2;
    vector<int> cache(n + 1, 0);
    int xx = 0, sum2 = 0;
    for (auto x: nums) {
        if(cache[x] > 0) xx = x;
        cache[x]++;
        sum2 += x;
    }
    return {xx, xx + sum - sum2};
}

void SetMismatch::run() {
    vector<int> v1 = {1,2,2,4};
    vector<int> r1 = {2,3};
    assert(findErrorNums(v1) == r1);

}
