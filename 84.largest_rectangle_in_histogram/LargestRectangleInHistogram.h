//
// Created by Qi Song on 2/9/18.
//

#ifndef LEETCODE_LARGESTRECTANGLEINHISTOGRAM_H
#define LEETCODE_LARGESTRECTANGLEINHISTOGRAM_H


#include "../Base.h"

class LargestRectangleInHistogram: public Base {

    int largest_rectangle_area(vector<int>& heights);
    int largest_rectangle_area_left_right(vector<int>& heights);
public:
    void run();

};


#endif //LEETCODE_LARGESTRECTANGLEINHISTOGRAM_H
