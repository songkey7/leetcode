//
// Created by songkey on 2018/5/20.
//

#ifndef LEETCODE_SUBSTRINGWITHCONCATENATIONOFALLWORDS_H
#define LEETCODE_SUBSTRINGWITHCONCATENATIONOFALLWORDS_H


#include "../Base.h"

class SubstringWithConcatenationOfAllWords: public Base {
    vector<int> find_substring(string s, vector<string> &words);
public:
    void run();
};

#endif //LEETCODE_SUBSTRINGWITHCONCATENATIONOFALLWORDS_H
