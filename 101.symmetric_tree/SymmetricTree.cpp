//
// Created by Qi Song on 2/28/18.
//

#include "SymmetricTree.h"

bool SymmetricTree::is_symmetric(SymmetricTree::TreeNode *root) {
    return root ? equal(root->left, root->right) : true;
}

bool SymmetricTree::equal(SymmetricTree::TreeNode *root1, SymmetricTree::TreeNode *root2) {
    if(!root1 && !root2) return true;
    else if(root1 && root2) {
        if(root1->val != root2->val) return false;
        return equal(root1->left, root2->right) && equal(root1->right, root2->left);
    }
    return false;
}

void SymmetricTree::run() {
    TreeNode *root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(2);
    root1->left->left = new TreeNode(3);
    root1->left->right = new TreeNode(4);
    root1->right->left = new TreeNode(4);
    root1->right->right= new TreeNode(3);
    assert(is_symmetric(root1));

    TreeNode *root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(2);
    root2->left->right = new TreeNode(3);
    root2->right->right= new TreeNode(3);
    assert(!is_symmetric(root2));
}


