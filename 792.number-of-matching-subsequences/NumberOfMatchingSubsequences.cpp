//
// Created by songkey on 2020/3/9.
//

#include "NumberOfMatchingSubsequences.h"

int NumberOfMatchingSubsequences::numMatchingSubseq(string s, vector<string> &words) {
    int ret = 0;
    unordered_map<string, int> m_map;
    for(auto w: words) {
        if(m_map.count(w) == 0) {
            m_map[w] = 0;
            int i = 0, j = 0;
            while (i < s.length() && j < w.length()) {
                if(s[i++] == w[j]) j++;
            }
            if(j == w.length()) {
                m_map[w] = 1;
            }
        }
        ret += m_map[w];
    }
    return ret;
}

void NumberOfMatchingSubsequences::run() {
    vector<string> words = {"a", "bb", "acd", "ace"};
    assert(numMatchingSubseq("abcde", words) == 3);
}
