//
// Created by Qi Song on 2/27/18.
//

#ifndef LEETCODE_MINIMUMWINDOWSUBSTRING_H
#define LEETCODE_MINIMUMWINDOWSUBSTRING_H


#include "../Base.h"

class MinimumWindowSubstring: public Base {
    string min_window(string s, string t);
    string min_window2(string s, string t);
    bool contain(const unordered_map<char, int> & c_map, const unordered_map<char, int> & c_target_map);
public:
    void run();
};


#endif //LEETCODE_MINIMUMWINDOWSUBSTRING_H
