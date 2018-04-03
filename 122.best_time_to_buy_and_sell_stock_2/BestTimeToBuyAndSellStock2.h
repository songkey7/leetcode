//
// Created by Qi Song on 03/04/2018.
//

#ifndef LEETCODE_BESTTIMETOBUYANDSELLSTOCK2_H
#define LEETCODE_BESTTIMETOBUYANDSELLSTOCK2_H


#include "../Base.h"

class BestTimeToBuyAndSellStock2: public Base {
    int max_profit(vector<int>& prices);
    int max_profit2(vector<int>& prices);
public:
    void run();
};


#endif //LEETCODE_BESTTIMETOBUYANDSELLSTOCK2_H
