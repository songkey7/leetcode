//
// Created by songkey on 2020/3/31.
//

#include "LongestStringChain.h"

int LongestStringChain::longestStrChain(vector<string> words) {
    auto fn = [](const string &a, const string &b){return a.length() < b.length();};
    sort(words.begin(), words.end(), fn);
    unordered_map<string, int> c_map;
    int ret = 1;
    for(const auto &w: words) {
        auto l = w.length();
        int c = 1;
        for (int i = 0; i < l; ++i) {
            auto s = w.substr(0, i) + w.substr(i + 1, l - i - 1);
            auto itr = c_map.find(s);
            if(itr != c_map.end()) {
                c = max(c, itr->second + 1);
            }
        }
        c_map[w] = c;
        ret = max(ret, c);
    }
    return ret;
}

void LongestStringChain::run() {
    assert(longestStrChain({"a","b","ba","bca","bda","bdca"}) == 4);
}


