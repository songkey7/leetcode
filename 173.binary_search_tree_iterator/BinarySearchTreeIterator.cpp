//
// Created by Qi Song on 11/06/2018.
//

#include "BinarySearchTreeIterator.h"

BinarySearchTreeIterator::BSTIterator::BSTIterator(Base::TreeNode *root) {
    while(root){
        st.push(root);
        root = root->left;
    }
}

bool BinarySearchTreeIterator::BSTIterator::hasNext() {
    return !st.empty();
}

int BinarySearchTreeIterator::BSTIterator::next() {
    TreeNode * p = st.top();
    int ret = p->val;
    p = p->right;
    st.pop();
    while(p){
        st.push(p);
        p = p->left;
    }
    return ret;
}

void BinarySearchTreeIterator::run() {
    TreeNode * root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);
    BSTIterator itr(root);
    while (itr.hasNext()) cout << itr.next() << " ";
}


