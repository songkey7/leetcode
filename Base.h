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
#include <cassert>
#include <climits>
#include <cstring>
#include <bitset>
#include <cmath>

using namespace std;

class Base{
protected:
    struct ListNode {
        int val;
        ListNode *next;
        ListNode(int x) : val(x), next(nullptr) {}
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
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    };

    void print_tree(TreeNode *root){
        vector<TreeNode *> out;
        out.push_back(root);
        size_t i = 0, j = out.size();
        while(i < j){
            while(i < j){
                if(out[i]) {
                    cout << out[i]->val << " ";
                    if(out[i]->left || out[i]->right){
                        out.resize(2 * i + 3, nullptr);
                        out[2 * i + 1] = out[i]->left;
                        out[2 * i + 2] = out[i]->right;
                    }
                }
                else cout << "null ";
                i++;
            }
            j = out.size();
        }
        cout << endl;
    }

    bool binary_tree_equal(TreeNode * r1, TreeNode *r2){
        if(!r1 || !r2) return r1 == r2;
        return r1->val == r2->val && binary_tree_equal(r1->left, r2->left) && binary_tree_equal(r1->right, r2->right);
    }

public:
    virtual void run() = 0;
};


#endif //LEETCODE_INTERFACE_H
