//
// Created by Qi Song on 2/2/18.
//

#include "CoinChange.h"

int CoinChange::coin_change(vector<int> &coins, int amount) {
    vector<int> changes(amount + 1, 0);
    for(int i = 1; i <= amount; i++){
        int m = INT_MAX;
        for(auto c: coins){
            if(i - c >= 0 && changes[i - c] != INT_MAX) m = min(m, changes[i - c] + 1);
        }
        changes[i] = m;
    }
    return changes[amount] == INT_MAX ? -1 : changes[amount];
}

void CoinChange::run() {
    vector<int> coins = {1,2,5};
    assert(coin_change(coins, 11) == 3);
    vector<int> coins2 = {2};
    assert(coin_change(coins2, 3) == -1);
}
