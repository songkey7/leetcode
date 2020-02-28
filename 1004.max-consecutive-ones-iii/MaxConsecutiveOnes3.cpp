//
// Created by songkey on 2020/2/28.
//

#include "MaxConsecutiveOnes3.h"

int MaxConsecutiveOnes3::longestOnes(vector<int> &A, int K) {
    int ret = 0, k = 0;
    for(int i = 0, j = 0; j < A.size(); j++) {
        if(A[j] == 0) {
            k++;
        }
        while(k > K) {
            if(A[i++] == 0) k--;
        }
        ret = max(ret, j - i + 1);
    }
    return ret;
}

void MaxConsecutiveOnes3::run() {
    vector<int> vec1 = {1,1,1,0,0,0,1,1,1,1,0};
    assert(longestOnes(vec1, 2) == 6);
    vector<int> vec2 = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    assert(longestOnes(vec2, 3) == 10);
    vector<int> vec3 = {0,0,0,1};
    assert(longestOnes(vec3, 4) == 4);
}
