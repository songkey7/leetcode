//
// Created by Qi Song on 2/7/18.
//

#ifndef LEETCODE_PRODUCTOFARRAYEXCEPTSELF_H
#define LEETCODE_PRODUCTOFARRAYEXCEPTSELF_H


#include "../Base.h"

class ProductOfArrayExceptSelf: public Base {
    vector<int> product_except_self(vector<int>& nums);
    vector<int> product_except_self2(vector<int>& nums);
public:
    void run();

};


#endif //LEETCODE_PRODUCTOFARRAYEXCEPTSELF_H
