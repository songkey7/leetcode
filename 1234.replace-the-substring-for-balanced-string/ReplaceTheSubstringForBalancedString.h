//
// Created by songkey on 2020/3/5.
//

#ifndef LEETCODE_REPLACETHESUBSTRINGFORBALANCEDSTRING_H
#define LEETCODE_REPLACETHESUBSTRINGFORBALANCEDSTRING_H


#include "../Base.h"

class ReplaceTheSubstringForBalancedString: public Base {
    int balancedString(string s);
    bool isBalance(vector<int>& counter);
public:
    void run() override;

};


#endif //LEETCODE_REPLACETHESUBSTRINGFORBALANCEDSTRING_H
