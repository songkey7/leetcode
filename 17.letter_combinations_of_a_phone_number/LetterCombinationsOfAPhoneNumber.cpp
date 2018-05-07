//
// Created by Qi Song on 09/03/2018.
//

#include "LetterCombinationsOfAPhoneNumber.h"

vector<string> LetterCombinationsOfAPhoneNumber::letter_combinations(string digits) {
    if(digits.empty()) return vector<string>();
    vector<string> ret;
    deque<string> q;
    q.push_back("");
    for(auto d: digits){
        int n = q.size();
        for(int j = 0; j < n; j++){
            string tmp = q.front();
            q.pop_front();
            for(auto c: digit_letter[d]) q.push_back(tmp + c);
        }
    }
    return vector<string>(q.begin(), q.end());
}

void LetterCombinationsOfAPhoneNumber::run() {
    vector<string> ret = {"ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"};
    assert(letter_combinations("23") == ret);
}


