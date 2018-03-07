//
// Created by Qi Song on 1/29/18.
//

#ifndef LEETCODE_HOUSEROBBER_3_H
#define LEETCODE_HOUSEROBBER_3_H


#include "../Base.h"

class HouseRobber3: public Base {
    int rob(TreeNode* root);
    vector<int> dfs(TreeNode* root);
public:
    void run();
};


#endif //LEETCODE_HOUSEROBBER_3_H
