//
// Created by songkey on 2020/3/3.
//

#include "LongestArithmeticSequence.h"

int LongestArithmeticSequence::longestArithSeqLength(vector<int> A) {
    size_t n = A.size();
    if (n <= 2) return n;
    int ret = 2;
    vector<unordered_map<int, int>> dp(n);
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int d = A[j] - A[i];
            dp[j][d] = dp[i].count(d) > 0 ? dp[i][d] + 1 : 2;
            ret = max(ret, dp[j][d]);
        }
    }
    return ret;
}

void LongestArithmeticSequence::run() {
    assert(longestArithSeqLength({3,6,9,12}) == 4);
    assert(longestArithSeqLength({9,4,7,2,10}) == 3);
    assert(longestArithSeqLength({20,1,15,3,10,5,8}) == 4);
}
