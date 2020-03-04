//
// Created by songkey on 2020/3/1.
//

#ifndef LEETCODE_LARGESTTIMEFORGIVENDIGITS_H
#define LEETCODE_LARGESTTIMEFORGIVENDIGITS_H


#include "../Base.h"

class LargestTimeForGivenDigits: public Base {
    string largestTimeFromDigits(vector<int>& A);
    string permutation(vector<int> A, int i);
    string isValid(vector<int> &A);
public:
    void run() override;

};


#endif //LEETCODE_LARGESTTIMEFORGIVENDIGITS_H
