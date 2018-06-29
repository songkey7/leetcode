//
// Created by Qi Song on 16/06/2018.
//

#include "DailyTemperatures.h"

vector<int> DailyTemperatures::daily_temperatures(vector<int> temperatures) {
    size_t n = temperatures.size();
    vector<int> ret(n, 0);
    for (int i = n - 2; i >= 0; --i) {
        int j = i + 1;
        while(ret[j] > 0 && temperatures[i] >= temperatures[j]) j += ret[j];
        if(temperatures[i] < temperatures[j]) ret[i] = j - i;
    }
    return ret;
}

void DailyTemperatures::run() {
    vector<int> temperatures = {73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> ret = {1, 1, 4, 2, 1, 1, 0, 0};
    assert(daily_temperatures(temperatures) == ret);
}
