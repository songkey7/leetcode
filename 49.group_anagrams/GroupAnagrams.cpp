//
// Created by Qi Song on 2/26/18.
//

#include "GroupAnagrams.h"

vector<vector<string>> GroupAnagrams::group_anagrams(vector<string> &strs) {
    vector<vector<string>> ret;
    unordered_map<string, size_t> uniq_map;
    for(auto s: strs){
        string tmp = s;
        sort(tmp.begin(), tmp.end());
        auto itr = uniq_map.find(tmp);
        if(uniq_map.find(tmp) != uniq_map.end()){
            ret[itr->second].push_back(s);
        } else{
            uniq_map[tmp] = ret.size();
            ret.push_back({s});
        }
    }
    return ret;
}

void GroupAnagrams::run() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> ret = {{"eat", "tea", "ate"}, {"tan","nat"}, {"bat"}};
    assert(group_anagrams(strs) == ret);
}
