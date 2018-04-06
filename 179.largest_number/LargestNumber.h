//
// Created by Qi Song on 06/04/2018.
//

#ifndef LEETCODE_LARGESTNUMBER_H
#define LEETCODE_LARGESTNUMBER_H


#include "../Base.h"

class LargestNumber: public Base {
    static bool cmp(string a, string b);
    string largest_number(vector<int>& nums);
public:
    void run();
};


#endif //LEETCODE_LARGESTNUMBER_H
