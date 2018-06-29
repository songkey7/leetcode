//
// Created by Qi Song on 28/06/2018.
//

#include "DifferentWaysToAddParentheses.h"

vector<int> DifferentWaysToAddParentheses::helper(string input, unordered_map<string, vector<int>> &visit_map) {
    if(visit_map.find(input) != visit_map.end()) return visit_map[input];
    vector<int> ret;
    for (size_t i = 0; i < input.length(); ++i) {
        if(input[i] == '+' || input[i] == '-' || input[i] == '*'){
            vector<int> ret1 = helper(input.substr(0, i), visit_map);
            vector<int> ret2 = helper(input.substr(i + 1), visit_map);
            for (int j : ret1) {
                for (int k : ret2) {
                    if(input[i] == '+'){
                        ret.push_back(j + k);
                    }
                    else if(input[i] == '-'){
                        ret.push_back(j - k);
                    }
                    else{
                        ret.push_back(j * k);
                    }
                }
            }
        }
    }
    if(ret.empty()){
        ret.push_back(atoi(input.c_str()));
    }
    visit_map[input] = ret;
    sort(ret.begin(), ret.end());
    return ret;
}

vector<int> DifferentWaysToAddParentheses::diff_ways_to_compute(string input) {
    unordered_map<string, vector<int>> visit_map;
    return helper(input, visit_map);
}


void DifferentWaysToAddParentheses::run() {
    vector<int> ret1 = {0, 2};
    assert(diff_ways_to_compute("2-1-1") == ret1);

    vector<int> ret2 = {-34, -14, -10, -10, 10};
    assert(diff_ways_to_compute("2*3-4*5") == ret2);
}


