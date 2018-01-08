//
// Created by Qi Song on 1/8/18.
//

#ifndef LEETCODE_PALINDROMICSUBSTRINGS_H
#define LEETCODE_PALINDROMICSUBSTRINGS_H


#include "../Base.h"

class PalindromicSubstrings: public Base{
public:
    int run();

private:
    int count_substrings(string s);
};


#endif //LEETCODE_PALINDROMICSUBSTRINGS_H
