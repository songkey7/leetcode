//
// Created by Qi Song on 09/05/2018.
//

#ifndef LEETCODE_ROTATELIST_H
#define LEETCODE_ROTATELIST_H


#include "../Base.h"

class RotateList: public Base {
    ListNode* rotate_right(ListNode* head, int k);
public:
    void run();
};


#endif //LEETCODE_ROTATELIST_H
