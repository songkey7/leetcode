//
// Created by Qi Song on 26/03/2018.
//

#ifndef LEETCODE_FIZZBUZZ_H
#define LEETCODE_FIZZBUZZ_H


#include "../Base.h"

class FizzBuzz: public Base {
    vector<string> fizz_buzz(int n);
public:
    void run();

    string itoa(int i);
};


#endif //LEETCODE_FIZZBUZZ_H
