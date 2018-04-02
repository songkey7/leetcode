//
// Created by Qi Song on 02/04/2018.
//

#ifndef LEETCODE_DECODEWAYS_H
#define LEETCODE_DECODEWAYS_H


#include "../Base.h"

class DecodeWays: public Base {
    int num_decodings(string s);
public:
    void run();

    bool is_letter(char i, char i1);
};


#endif //LEETCODE_DECODEWAYS_H
