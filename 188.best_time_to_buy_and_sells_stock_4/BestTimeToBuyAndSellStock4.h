//
// Created by songkey on 2018/5/27.
//

#ifndef LEETCODE_BESTTIMETOBUYANDSELLSTOCK4_H
#define LEETCODE_BESTTIMETOBUYANDSELLSTOCK4_H


#include "../Base.h"

class BestTimeToBuyAndSellStock4: public Base{
    bool dependent(const pair<int, int> &p1, const pair<int, int> &p2){return p1.second <= p2.first|| p1.first >= p2.second;}
    void dfs(vector<int> &prices, vector<pair<int, int>> candidate, int k, int cnt, vector<pair<int, int>> &out, int sum, int &ret);
    int max_profit(int k, vector<int> prices);
    int max_profit2(int k, vector<int> prices);
public:
    void run();
};


#endif //LEETCODE_BESTTIMETOBUYANDSELLSTOCK4_H
