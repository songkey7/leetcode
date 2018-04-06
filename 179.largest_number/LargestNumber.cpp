//
// Created by Qi Song on 06/04/2018.
//

#include "LargestNumber.h"

string LargestNumber::largest_number(vector<int> &nums) {
    vector<string> str;
    for(auto i: nums) str.push_back(to_string(i));
    sort(str.begin(), str.end(), cmp);
    string ret = "";
    for(auto s: str) ret += s;
    return ret[0] == '0' ? "0" : ret;
}

bool LargestNumber::cmp(string a, string b) {
    return a + b > b + a;
}

void LargestNumber::run() {
    vector<int> nums = {3, 30, 34, 5, 9};
    assert(largest_number(nums) == "9534330");
}


