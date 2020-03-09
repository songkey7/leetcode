//
// Created by songkey on 2020/3/9.
//

#ifndef LEETCODE_NUMBEROFMATCHINGSUBSEQUENCES_H
#define LEETCODE_NUMBEROFMATCHINGSUBSEQUENCES_H


#include "../Base.h"

class NumberOfMatchingSubsequences: public Base {
    int numMatchingSubseq(string S, vector<string>& words);
public:
    void run() override;
};


#endif //LEETCODE_NUMBEROFMATCHINGSUBSEQUENCES_H
