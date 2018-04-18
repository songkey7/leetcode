//
// Created by Qi Song on 18/04/2018.
//

#include "KthSmallestElementInASortedMatrix.h"

int KthSmallestElementInASortedMatrix::kth_smallest(vector<vector<int>> &matrix, int k) {
    int n = matrix.size();
    int l = matrix[0][0], r = matrix[n - 1][n - 1];
    while(l < r){
        int m = (l + r) / 2;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            cnt += upper_bound(matrix[i].begin(), matrix[i].end(), m) - matrix[i].begin();
        }
        if(cnt < k) l = m + 1;
        else r = m;
    }
    return l;
}

int KthSmallestElementInASortedMatrix::kth_smallest2(vector<vector<int>> &matrix, int k) {
    int n = matrix.size();
    vector<int> v = matrix[0];
    bool flag = false;
    for(int i = 1; i < n; i++){
        vector<int> tmp(n * (i + 1));
        int p1 = 0, p2 = 0, p = 0;
        while(p1 < v.size() && p2 < matrix[i].size()){
            if(v[p1] < matrix[i][p2]) tmp[p++] = v[p1++];
            else {
                tmp[p++] = matrix[i][p2++];
                if(p2 == 1 && p > k) {
                    flag = true;
                    break;
                }
            }
        }
        if(flag) return tmp[k - 1];
        while(p1 < v.size()) tmp[p++] = v[p1++];
        while(p2 < matrix[i].size()) tmp[p++] = matrix[i][p2++];
        v = tmp;
    }
    return v[k - 1];
}

int KthSmallestElementInASortedMatrix::kth_smallest3(vector<vector<int>> &matrix, int k) {
    int n = matrix.size();
    priority_queue<vector<int>, vector<vector<int>>, decltype(&cmp)> q(cmp);
    for(int i = 0; i < n; i++){
        vector<int> tmp = {matrix[i][0],i,0};
        q.push(tmp);
    }
    vector<int> tmp;
    while(k--){
        tmp = q.top();
        q.pop();
        tmp[2]++;
        if(tmp[2] < matrix[tmp[1]].size()){
            q.push({matrix[tmp[1]][tmp[2]], tmp[1], tmp[2]});
        }
    }
    return tmp[0];
}

void KthSmallestElementInASortedMatrix::run() {
    vector<vector<int>> matrix = {
            {1,  5,  9},
            {10, 11, 12},
            {12, 13, 15}
    };
    assert(kth_smallest(matrix, 8) == 13);
    assert(kth_smallest2(matrix, 8) == 13);
    assert(kth_smallest3(matrix, 8) == 13);
}


