//
// Created by user on 03/03/2018.
//

#ifndef LEETCODE_SERIALIZEANDDESERIALIZEBINARYTREE_H
#define LEETCODE_SERIALIZEANDDESERIALIZEBINARYTREE_H


#include "../Base.h"

class SerializeAndDeserializeBinaryTree: public Base {
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };

    bool equal(TreeNode * r1, TreeNode * r2);

    class Codec {
        TreeNode * deserialize_helper(string &data);
    public:
        // Encodes a tree to a single string.
        string serialize(TreeNode* root);

        // Decodes your encoded data to tree.
        TreeNode* deserialize(string data);
    };

public:
    void run();

};


#endif //LEETCODE_SERIALIZEANDDESERIALIZEBINARYTREE_H
