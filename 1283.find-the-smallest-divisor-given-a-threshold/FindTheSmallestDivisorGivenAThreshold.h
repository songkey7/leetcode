//
// Created by songkey on 2020/3/30.
//

#ifndef LEETCODE_FINDTHESMALLESTDIVISORGIVENATHRESHOLD_H
#define LEETCODE_FINDTHESMALLESTDIVISORGIVENATHRESHOLD_H


#include "../Base.h"

class FindTheSmallestDivisorGivenAThreshold: public Base {
    int smallestDivisor(vector<int> nums, int threshold);
    int sum(vector<int> &nums, int m);
public:
    void run() override;
};


#endif //LEETCODE_FINDTHESMALLESTDIVISORGIVENATHRESHOLD_H
