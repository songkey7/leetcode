//
// Created by Qi Song on 1/30/18.
//

#ifndef LEETCODE_QUEUERECONSTRUCTIONBYHEIGHT_H
#define LEETCODE_QUEUERECONSTRUCTIONBYHEIGHT_H


#include "../Base.h"

class QueueReconstructionByHeight: public Base {
    static bool comp(const pair<int, int> &a,const pair<int, int> &b)
    {
        return a.second < b.second || (a.second == b.second && a.first < b.first);
    }
    vector<pair<int, int>> reconstruct_queue(vector<pair<int, int>>& people);
public:
    void run();
};


#endif //LEETCODE_QUEUERECONSTRUCTIONBYHEIGHT_H
