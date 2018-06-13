//
// Created by Qi Song on 13/06/2018.
//

#ifndef LEETCODE_BESTTIMETOBUYANDSELLSTOCKWITHTRANSACTIONFEE_H
#define LEETCODE_BESTTIMETOBUYANDSELLSTOCKWITHTRANSACTIONFEE_H


#include "../Base.h"

class BestTimeToBuyAndSellStockWithTransactionFee: public Base {
    int max_profit(vector<int> prices, int fee);
public:
    void run();
};


#endif //LEETCODE_BESTTIMETOBUYANDSELLSTOCKWITHTRANSACTIONFEE_H
