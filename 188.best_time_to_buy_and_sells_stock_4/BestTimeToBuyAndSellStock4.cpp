//
// Created by songkey on 2018/5/27.
//

#include "BestTimeToBuyAndSellStock4.h"

int BestTimeToBuyAndSellStock4::max_profit(int k, vector<int> prices) {
    size_t n = prices.size();
    vector<pair<int, int>> candidate;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if(prices[i] - prices[j] > 0)
                candidate.emplace_back(j, i);
        }
    }
    int ret = 0;
    vector<pair<int, int>> out;
    dfs(prices, candidate, k, 0, out, 0, ret);
    return ret;
}

void BestTimeToBuyAndSellStock4::dfs(vector<int> &prices, vector<pair<int, int>> candidate, int k, int cnt, vector<pair<int, int>> &out, int sum, int &ret) {
    if(sum > ret) ret = sum;
    if(candidate.empty() || cnt == k){
        return;
    }
    while(!candidate.empty()){
        pair<int, int> r = candidate.back();
        candidate.pop_back();
        bool flag = true;
        for(auto o: out){
            if(!dependent(r, o)){
                flag = false;
                break;
            }
        }
        if(flag){
            int tmp = prices[r.second] - prices[r.first];
            sum += tmp;
            out.push_back(r);
            dfs(prices, candidate, k, cnt + 1, out, sum, ret);
            out.pop_back();
            sum -= tmp;
        }
    }
}

int BestTimeToBuyAndSellStock4::max_profit2(int k, vector<int> prices) {
    size_t n = prices.size();
    if(n < 2 || k <= 0) return 0;
    int ret = 0;
    if(k >= n / 2){
        for (int i = 1; i < n; ++i)
            ret += max((prices[i] - prices[i - 1]), 0);
        return ret;
    }
    vector<int> buy(k + 1, INT_MIN);
    vector<int> sell(k + 1, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j <= k; ++j) {
            buy[j] = max(buy[j], sell[j- 1] - prices[i]);
            sell[j] = max(sell[j], buy[j] + prices[i]);
        }
    }
    return sell[k];
}


void BestTimeToBuyAndSellStock4::run() {
    assert(max_profit2(2, {1,2, 7, 4,11}) == 13);
    assert(max_profit2(2, {1,4,2}) == 3);
    assert(max_profit2(2, {2,4,1}) == 2);
    assert(max_profit2(2, {3,2,6,5,0,3}) == 7);
}


