//
// Created by Qi Song on 05/04/2018.
//

#ifndef LEETCODE_FRACTIONTORECURRINGDECIMAL_H
#define LEETCODE_FRACTIONTORECURRINGDECIMAL_H


#include "../Base.h"

class FractionToRecurringDecimal: public Base {
    string fraction_to_decimal(int l_numerator, int l_denominator);
public:
    void run();

    string itoa(long num);
};


#endif //LEETCODE_FRACTIONTORECURRINGDECIMAL_H
