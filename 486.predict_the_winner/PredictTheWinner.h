//
// Created by Qi Song on 16/06/2018.
//

#ifndef LEETCODE_PREDICTTHEWINNER_H
#define LEETCODE_PREDICTTHEWINNER_H


#include "../Base.h"

class PredictTheWinner: public Base {
    bool predict_the_winner(vector<int> nums);
    int helper(vector<int> &vector, int i, int size);
    bool predict_the_winner2(vector<int> nums);
public:
    void run();

};


#endif //LEETCODE_PREDICTTHEWINNER_H
