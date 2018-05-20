//
// Created by songkey on 2018/5/20.
//

#include "SubstringWithConcatenationOfAllWords.h"

vector<int> SubstringWithConcatenationOfAllWords::find_substring(string s, vector<string> &words) {
    unordered_map<string, int> word_map;
    size_t n_word = words.size();
    size_t n = s.length();
    if(n_word == 0 || n == 0) return {};

    for(auto w: words) word_map[w]++;

    size_t len = words[0].length();
    n_word = len * n_word;

    vector<int> ret;
    for (int i = 0; i < n - n_word + 1; ++i) {
        unordered_map<string, int> counter;
        for (int j = 0; j < n_word; j+=len) {
            string tmp = s.substr(i + j, len);
            counter[tmp]++;
            if(word_map.find(tmp) == word_map.end() || counter[tmp] > word_map[tmp]){
                break;
            }
            if(j == n_word - len){
                ret.push_back(i);
            }
        }
    }

    return ret;
}

void SubstringWithConcatenationOfAllWords::run() {
    vector<string> words = {"foo","bar"};
    vector<int> ret = {0, 9};
    assert(find_substring("barfoothefoobarman", words) == ret);

    vector<string> words2 = {"word","student"};
    assert(find_substring("wordgoodstudentgoodword", words2).empty());

    vector<string> words3 = {"word","good","best","good"};
    vector<int> ret3 = {8};
    assert(find_substring("wordgoodgoodgoodbestword", words3) == ret3);

    vector<string> words4 = {"ab","ba","ba"};
    vector<int> ret4 = {1};
    assert(find_substring("ababaab", words4) == ret4);
}


