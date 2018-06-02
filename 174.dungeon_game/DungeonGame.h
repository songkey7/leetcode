//
// Created by songkey on 2018/5/30.
//

#ifndef LEETCODE_DUNGEONGAME_H
#define LEETCODE_DUNGEONGAME_H


#include "../Base.h"

class DungeonGame: public Base {
    int calculate_minimum_HP(vector<vector<int>>& dungeon);
public:
    void run();
};


#endif //LEETCODE_DUNGEONGAME_H
