//
// Created by songkey on 2020/4/7.
//

#include "WordSubsets.h"

vector<string> WordSubsets::wordSubsets(vector<string> A, vector<string> B) {
    vector<char> c_map(26, 0);
    vector<string> ret;
    for (auto b: B) {
        vector<char> t_map(26, 0);
        for(auto w: b) {
            t_map[w - 'a']++;
        }
        for (int i = 0; i < 26; ++i) {
            c_map[i] = max(c_map[i], t_map[i]);
        }
    }
    for(auto a: A){
        vector<char> t_map = c_map;
        for(auto w: a){
            t_map[w - 'a']--;
        }
        bool flag = true;
        for (int i = 0; i < 26; ++i) {
            if(t_map[i] > 0) {
                flag = false;
                break;
            }
        }
        if(flag) {
            ret.push_back(a);
        }
    }
    return ret;
}

void WordSubsets::run() {
    vector<string> src = {"amazon","apple","facebook","google","leetcode"};
    for(auto x: wordSubsets(src, {"e","o"})) cout << x << " " ;
    cout << endl;
    for(auto x: wordSubsets(src, {"e","oo"})) cout << x << " ";
    cout << endl;
}
