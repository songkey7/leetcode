//
// Created by Qi Song on 2/2/18.
//

#ifndef LEETCODE_COINCHANGE_H
#define LEETCODE_COINCHANGE_H


#include "../Base.h"

class CoinChange: public Base {
    int coin_change(vector<int>& coins, int amount);
public:
    void run();
};


#endif //LEETCODE_COINCHANGE_H
