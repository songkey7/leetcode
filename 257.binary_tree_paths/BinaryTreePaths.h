//
// Created by Qi Song on 02/07/2018.
//

#ifndef LEETCODE_BINARYTREEPATHS_H
#define LEETCODE_BINARYTREEPATHS_H


#include "../Base.h"

class BinaryTreePaths: public Base {
    vector<string> binary_tree_paths(TreeNode* root);
    void binary_tree_paths(TreeNode *root, string s, vector<string> &ret);
public:
    void run();

};


#endif //LEETCODE_BINARYTREEPATHS_H
