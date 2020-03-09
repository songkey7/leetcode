//
// Created by songkey on 2020/3/9.
//

#include "MinimumMovesToEqualArrayElements.h"

int MinimumMovesToEqualArrayElements::minMoves(vector<int> nums) {
    int ret = 0;
    size_t n = nums.size();
    if(n <= 1) return ret;
    sort(nums.begin(), nums.end());
    while(nums[0] != nums[n - 1]) {
        int d = max(nums[n - 1] - nums[n - 2], 1);
        nums[n-1] -= d;
        ret+=d;
        for (int i=n-1; i >= 0 && nums[i-1] > nums[i]; --i) {
            swap(nums[i], nums[i-1]);
        }
    }
    return ret;
}

// sum + ret * (n - 1) = (m + ret) * n
// ret = sum - m * n
int MinimumMovesToEqualArrayElements::minMoves2(vector<int> nums) {
    int sum = 0, m = INT_MAX;
    for(auto x: nums) {
        sum += x;
        m = min(m, x);
    }
    return sum - m * nums.size();
}

void MinimumMovesToEqualArrayElements::run() {
    assert(minMoves({1,2,3}) == 3);
}
