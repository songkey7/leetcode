//
// Created by Qi Song on 04/06/2018.
//

#ifndef LEETCODE_INTERLEAVINGSTRING_H
#define LEETCODE_INTERLEAVINGSTRING_H


#include "../Base.h"

class InterleavingString: public Base {
    bool is_interleave(string s1, string s2, string s3);
    bool is_interleave2(string s1, string s2, string s3);
public:
    void run();
};


#endif //LEETCODE_INTERLEAVINGSTRING_H
