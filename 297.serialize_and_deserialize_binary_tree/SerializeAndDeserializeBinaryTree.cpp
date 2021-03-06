//
// Created by user on 03/03/2018.
//

#include <sstream>
#include "SerializeAndDeserializeBinaryTree.h"

string SerializeAndDeserializeBinaryTree::Codec::serialize(SerializeAndDeserializeBinaryTree::TreeNode *root) {
    if(!root) return "#";
    return to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right);
}

SerializeAndDeserializeBinaryTree::TreeNode *SerializeAndDeserializeBinaryTree::Codec::deserialize_helper(string &data) {
    int c = data[0];
    if(c == '#'){
        if(data.size() > 1) data.erase(0, 2);
        return nullptr;
    }
    else{
        int i = data.find(',');
        TreeNode * root = new TreeNode(stoi(data.substr(0, i)));
        data.erase(0, i + 1);
        root->left = deserialize_helper(data);
        root->right = deserialize_helper(data);
        return root;
    }
}

SerializeAndDeserializeBinaryTree::TreeNode *SerializeAndDeserializeBinaryTree::Codec::deserialize(string data) {
    cout << data << endl;
    TreeNode * ret = deserialize_helper(data);
    return ret;
}

void SerializeAndDeserializeBinaryTree::run() {
    TreeNode * root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
    Codec codec;
    TreeNode * ret = codec.deserialize(codec.serialize(root));
    assert(binary_tree_equal(ret, root));
}


