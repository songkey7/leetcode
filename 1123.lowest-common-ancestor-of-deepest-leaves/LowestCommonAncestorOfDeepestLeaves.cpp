//
// Created by songkey on 2020/4/10.
//

#include "LowestCommonAncestorOfDeepestLeaves.h"

Base::TreeNode *LowestCommonAncestorOfDeepestLeaves::lcaDeepestLeaves(TreeNode *root) {
    int depth = 0;
    return lcaDeepestLeaves(root, depth);
}

Base::TreeNode *LowestCommonAncestorOfDeepestLeaves::lcaDeepestLeaves(TreeNode *root, int &depth) {
    if(!root) return nullptr;
    int dl = depth + 1;
    int dr = depth + 1;
    auto tl = lcaDeepestLeaves(root->left, dl);
    auto tr = lcaDeepestLeaves(root->right, dr);
    depth = max(dl, dr);
    if(dl == dr) return root;
    else if(dl > dr) return tl;
    else return tr;
}

void LowestCommonAncestorOfDeepestLeaves::run() {
    auto *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    assert(lcaDeepestLeaves(root) == root->left);
}


