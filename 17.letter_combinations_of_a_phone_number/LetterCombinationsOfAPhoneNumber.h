//
// Created by Qi Song on 09/03/2018.
//

#ifndef LEETCODE_LETTERCOMBINATIONSOFAPHONENUMBER_H
#define LEETCODE_LETTERCOMBINATIONSOFAPHONENUMBER_H


#include "../Base.h"

class LetterCombinationsOfAPhoneNumber: public Base {
    unordered_map<char, vector<char>> digit_letter = {
            {'2', {'a','b','c'}},
            {'3', {'d','e','f'}},
            {'4', {'g','h','i'}},
            {'5', {'j','k','l'}},
            {'6', {'m','n','o'}},
            {'7', {'p','q','r','s'}},
            {'8', {'t','u','v'}},
            {'9', {'w','x','y','z'}}
    };
    vector<string> letter_combinations(string digits);
public:
    void run();

};


#endif //LEETCODE_LETTERCOMBINATIONSOFAPHONENUMBER_H
