//
// Created by Qi Song on 05/04/2018.
//

#ifndef LEETCODE_MAXPOINTSONALINE_H
#define LEETCODE_MAXPOINTSONALINE_H


#include "../Base.h"

class MaxPointsOnALine: public Base {
    struct Point {
        int x;
        int y;
        Point() : x(0), y(0) {}
        Point(int a, int b) : x(a), y(b) {}
    };
    int max_points(vector<Point>& points);
    int GCD(int a, int b);
public:
    void run();

};


#endif //LEETCODE_MAXPOINTSONALINE_H
