//
// Created by Qi Song on 02/08/2018.
//

#ifndef LEETCODE_EVALUATEDIVISION_H
#define LEETCODE_EVALUATEDIVISION_H


#include "../Base.h"

class EvaluateDivision: public Base {
    vector<double> calc_equation(vector<pair<string, string>> equations, vector<double>& values, vector<pair<string, string>> queries);
public:
    void run();
};


#endif //LEETCODE_EVALUATEDIVISION_H
