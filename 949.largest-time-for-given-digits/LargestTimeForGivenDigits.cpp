//
// Created by songkey on 2020/3/1.
//

#include "LargestTimeForGivenDigits.h"

string LargestTimeForGivenDigits::largestTimeFromDigits(vector<int> &A) {
    return permutation(A, 0);
}

string LargestTimeForGivenDigits::permutation(vector<int> A, int i) {
    if (i == 3) return isValid(A);
    sort(A.begin() + i, A.end(), greater<>());
    for (int j = i; j < A.size(); ++j) {
        swap(A[i], A[j]);
        string ret = permutation(A, i + 1);
        if(!ret.empty()) return ret;
        swap(A[i], A[j]);
    }
    return "";
}

string LargestTimeForGivenDigits::isValid(vector<int> &A) {
    if(A[0]>2 || A[2] > 5 || (A[0] == 2 && A[1] > 3)) return "";
    else return to_string(A[0]) + to_string(A[1]) + ":" + to_string(A[2]) + to_string(A[3]);
}

void LargestTimeForGivenDigits::run() {
    vector<int> t1 = {1,2,3,4};
    assert(largestTimeFromDigits(t1) == "23:41");
    vector<int> t2 = {5,5,5,5};
    assert(largestTimeFromDigits(t2).empty());
    vector<int> t3 = {0,4,0,3};
    assert(largestTimeFromDigits(t3) == "04:30");
    vector<int> t4 = {0,1,0,3};
    assert(largestTimeFromDigits(t4) == "13:00");
}

