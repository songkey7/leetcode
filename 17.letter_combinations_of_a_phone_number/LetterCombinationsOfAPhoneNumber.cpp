//
// Created by Qi Song on 09/03/2018.
//

#include "LetterCombinationsOfAPhoneNumber.h"

vector<string> LetterCombinationsOfAPhoneNumber::letter_combinations(string digits) {
    vector<string> ret;
    for(auto d: digits){
        if(ret.empty()) ret.push_back("");
        vector<string> tmp;
        for(auto s: ret){
            for(auto c: digit_letter[d]){
                tmp.push_back(s+c);
            }
        }
        ret = tmp;
    }
    return ret;
}

vector<string> LetterCombinationsOfAPhoneNumber::letter_combinations2(string digits) {
    size_t n = digits.size();
    if(n == 0) return vector<string>();
    deque<string> q;
    q.push_back("");
    for(int i = 0; i < digits.size(); i++){
        string s = q.front();
        while(s.size() == i){
            q.pop_front();
            for(auto c: digit_letter[digits[i]]){
                q.push_back(s + c);
            }
            s = q.front();
        }
    }
    return vector<string> (q.begin(), q.end());
}

void LetterCombinationsOfAPhoneNumber::run() {
    vector<string> ret = {"ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"};
    assert(letter_combinations2("23") == ret);
}


