//
// Created by Qi Song on 1/8/18.
//

#ifndef LEETCODE_INTERFACE_H
#define LEETCODE_INTERFACE_H

#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <list>
#include <deque>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <assert.h>
#include <limits.h>
#include <cstring>
#include <bitset>
#include <cmath>

using namespace std;

class Base{
protected:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(NULL) {}
    };

    void print_list(ListNode * h){
        while(h){
            cout << h->val;
            h = h->next;
            if(h) cout << ",";
        }
        cout << endl;
    }

    void print_vector(const vector<int> &v, int n){
        for(int i = 0; i < n; i++) cout << v[i] << " ";
        cout << endl;
    }

    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };

    bool binary_tree_equal(TreeNode * r1, TreeNode *r2){
        if(!r1 && !r2)
            return true;
        else if(r1 && r2 && r1->val == r2->val)
            return binary_tree_equal(r1->left, r2->left) && binary_tree_equal(r1->right, r2->right);
        else
            return false;
    }
public:
    virtual void run() = 0;
};


#endif //LEETCODE_INTERFACE_H
