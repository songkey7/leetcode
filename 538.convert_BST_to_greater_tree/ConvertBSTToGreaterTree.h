//
// Created by Qi Song on 07/03/2018.
//

#ifndef LEETCODE_CONVERTBSTTOGREATERTREE_H
#define LEETCODE_CONVERTBSTTOGREATERTREE_H


#include "../Base.h"

class ConvertBSTToGreaterTree: public Base {
    TreeNode* convertBST(TreeNode* root);
    void convertBST(TreeNode* root, int &sum);
public:
    void run();

};


#endif //LEETCODE_CONVERTBSTTOGREATERTREE_H
