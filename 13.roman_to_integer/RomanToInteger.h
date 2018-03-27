//
// Created by Qi Song on 26/03/2018.
//

#ifndef LEETCODE_ROMANTOINTEGER_H
#define LEETCODE_ROMANTOINTEGER_H


#include "../Base.h"

class RomanToInteger: public Base {
    unordered_map<char, int> c_map = { { 'I' , 1 },
                                       { 'V' , 5 },
                                       { 'X' , 10 },
                                       { 'L' , 50 },
                                       { 'C' , 100 },
                                       { 'D' , 500 },
                                       { 'M' , 1000 } };
    int roman_to_int(string s);
    int roman_to_int2(string s);
public:
    void run();

};


#endif //LEETCODE_ROMANTOINTEGER_H
