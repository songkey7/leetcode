//
// Created by Qi Song on 1/8/18.
//

#ifndef LEETCODE_WORDBREAK_H
#define LEETCODE_WORDBREAK_H

#include "../Base.h"

class WordBreak: public Base{
public:
    int run();

private:
    bool word_break(const string &s, vector<string> &wordDict);
};


#endif //LEETCODE_WORDBREAK_H
