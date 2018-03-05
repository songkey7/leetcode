//
// Created by user on 05/03/2018.
//

#ifndef LEETCODE_THESKYLINEPROBLEM_H
#define LEETCODE_THESKYLINEPROBLEM_H


#include "../Base.h"

class TheSkylineProblem: public Base {
    vector<pair<int, int>> get_skyline(vector<vector<int>>& buildings);
public:
    void run();

};


#endif //LEETCODE_THESKYLINEPROBLEM_H
