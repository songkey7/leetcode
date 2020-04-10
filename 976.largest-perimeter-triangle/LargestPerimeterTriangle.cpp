//
// Created by songkey on 2020/4/5.
//

#include "LargestPerimeterTriangle.h"

int LargestPerimeterTriangle::largestPerimeter(vector<int> A) {
    sort(A.begin(), A.end());
    int n = A.size();
    for (int i = n - 1; i > 1; --i) {
        if(A[i] < A[i - 1] + A[i - 2]) return A[i] + A[i - 2] + A[i - 1];
    }
    return 0;
}

void LargestPerimeterTriangle::run() {
    assert(largestPerimeter({2,1,2}) == 5);
    assert(largestPerimeter({1,1,2}) == 0);
    assert(largestPerimeter({3,2,3,4}) == 10);
    assert(largestPerimeter({3,6,2,3}) == 8);
}
