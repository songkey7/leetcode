//
// Created by Qi Song on 04/04/2018.
//

#include "GasStation.h"

int GasStation::can_complete_circuit(vector<int> &gas, vector<int> &cost) {
    size_t n = gas.size();
    if(n == 0) return -1;
    int sum_gas = 0;
    int sum_cost = 0;
    int b = 0, e = 0;
    bool flag = true;
    while(1){
        while(sum_gas >= sum_cost && (flag || b != e)){
            if(b == e) flag = false;
            sum_gas += gas[e];
            sum_cost += cost[e];
            e++;
            if(e == n) e = 0;
        }
        if(b == e && sum_gas >= sum_cost) return b;
        while(sum_gas < sum_cost){
            sum_gas -= gas[b];
            sum_cost -= cost[b];
            b++;
            if(b == n) return -1;
        }
        e = b;
        flag = true;
    }
}

void GasStation::run() {
    vector<int> gas = {4};
    vector<int> cost = {5};
    assert(can_complete_circuit(gas, cost) == -1);
}
