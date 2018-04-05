//
// Created by Qi Song on 05/04/2018.
//

#include "FractionToRecurringDecimal.h"

string FractionToRecurringDecimal::fraction_to_decimal(int numerator, int denominator) {
    if(numerator == 0) return "0";
    unordered_map<int, int> numerator_map;
    bool flag = (numerator < 0) ^ (denominator < 0);
    string ret = flag ? "-" : "";
    long l_numerator = abs(long(numerator));
    long l_denominator = abs(long(denominator));
    ret += itoa(l_numerator / l_denominator);
    l_numerator = (l_numerator % l_denominator);
    if(l_numerator == 0) return ret;
    ret += ".";
    string tmp = "";
    int i = 0;
    while(1){
        l_numerator *= 10;
        if(numerator_map.find(l_numerator) != numerator_map.end()){
            tmp.insert(numerator_map[l_numerator], "(");
            return ret + tmp + ")";
        }
        numerator_map[l_numerator] = i++;
        tmp += itoa(l_numerator / l_denominator);
        l_numerator = (l_numerator % l_denominator);
        if(l_numerator == 0) return ret + tmp;
    }
}

string FractionToRecurringDecimal::itoa(long num) {
    if(num == 0) return "0";
    string ret;
    while(num){
        ret += (num % 10) + '0';
        num /= 10;
    }
    reverse(ret.begin(), ret.end());
    return ret;
}

void FractionToRecurringDecimal::run() {
    assert(fraction_to_decimal(1,99) == "0.(01)");
    assert(fraction_to_decimal(1,90) == "0.0(1)");
    assert(fraction_to_decimal(1,6) == "0.1(6)");
    assert(fraction_to_decimal(-2147483648,-1) == "2147483648");
    assert(fraction_to_decimal(1,2) == "0.5");
    assert(fraction_to_decimal(2,1) == "2");
    assert(fraction_to_decimal(2,3) == "0.(6)");
}


