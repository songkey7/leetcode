//
// Created by Qi Song on 03/04/2018.
//

#ifndef LEETCODE_VALIDPALINDROME_H
#define LEETCODE_VALIDPALINDROME_H


#include "../Base.h"

class ValidPalindrome: public Base {
    bool is_palindrome(string s);
    bool is_char(char &c);
public:
    void run();
};


#endif //LEETCODE_VALIDPALINDROME_H
