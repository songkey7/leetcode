//
// Created by songkey on 2020/3/6.
//

#include "CompareStringsByFrequencyOfTheSmallestCharacter.h"

vector<int>
CompareStringsByFrequencyOfTheSmallestCharacter::numSmallerByFrequency(vector<string> queries, vector<string> words) {
    vector<int> arr_len;
    vector<int> ret;
    for(auto s: words){
       arr_len.push_back(f(s));
    }
    sort(arr_len.begin(), arr_len.end(), greater<int>());
    for(auto s: queries){
        int i = f(s);
        int j = 0;
        while(j < arr_len.size() && i < arr_len[j]) j++;
        ret.push_back(j);
        //ret.push_back(binary_search(arr_len, f(s)));
    }
    return ret;
}

int CompareStringsByFrequencyOfTheSmallestCharacter::f(string s) {
    unordered_map<char, int> c_map;
    char c_min = CHAR_MAX;
    for(auto c: s) {
        c_map[c]++;
        c_min = min(c_min, c);
    }
    return c_map[c_min];
}

int CompareStringsByFrequencyOfTheSmallestCharacter::binary_search(vector<int> v, int x) {
    int i = 0, j = v.size() - 1;
    while(i <= j) {
        int m = (i + j) / 2;
        if(v[m] > x) i = m + 1;
        else j = m - 1;
    }
    return i;
}


void CompareStringsByFrequencyOfTheSmallestCharacter::run() {
    vector<int> r1 = {1};
    vector<int> r2 = {1, 2};
    assert(numSmallerByFrequency({"cbd"}, {"zaaaz"}) == r1);
    assert(numSmallerByFrequency({"bbb","cc"}, {"a","aa","aaa","aaaa"}) == r2);
}


