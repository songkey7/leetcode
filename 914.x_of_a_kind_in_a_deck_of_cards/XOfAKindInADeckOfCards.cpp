//
// Created by songkey on 2019/3/16.
//

#include "XOfAKindInADeckOfCards.h"

bool XOfAKindInADeckOfCards::hasGroupsSizeX(vector<int> &deck) {
    map<int, int> hist_map;
    for(auto i : deck){
        hist_map[i]++;
    }
    int c_max = INT_MIN, c_min = INT_MAX;
    for(const auto itr : hist_map){
        c_max = max(c_max, itr.second);
        c_min = min(c_min, itr.second);
    }
    if(c_min < 2) return false;
    for (int i = 2; i <= c_max; ++i) {
        bool flag = true;
        for(const auto itr : hist_map){
            if(itr.second % i != 0) {
                flag = false;
                break;
            }
        }
        if(flag) return true;
    }
    return false;
}

bool XOfAKindInADeckOfCards::hasGroupsSizeX2(vector<int> &deck) {
    unordered_map<int, int> hist_map;
    for(auto x : deck){
       hist_map[x]++;
    }
    int x = 0;
    auto gcd = [](int a, int b){
        while(a != b){
            if(a > b) a = a - b;
            else b = b - a;
        }
        return a;
    };
    for(auto itr : hist_map){
        if(x == 1) break;
        else if(x == 0) x = itr.second;
        else x = gcd(x, itr.second);
    }
    return x > 1;
}

void XOfAKindInADeckOfCards::run() {
    vector<int> data1 = {1,2,3,4,4,3,2,1};
    assert(hasGroupsSizeX(data1));
    vector<int> data2 = {1,1,1,2,2,2,3,3};
    assert(!hasGroupsSizeX(data2));
    vector<int> data3 = {1};
    assert(!hasGroupsSizeX(data3));
    vector<int> data4 = {1,1};
    assert(hasGroupsSizeX(data4));
    vector<int> data5 = {1,1,2,2,2,2};
    assert(hasGroupsSizeX(data5));
    vector<int> data6 = {1,1,1,1,2,2,2,2,2,2};
    assert(hasGroupsSizeX(data6));
}


