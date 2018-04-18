//
// Created by Qi Song on 18/04/2018.
//

#ifndef LEETCODE_KTHSMALLESTELEMENTINASORTEDMATRIX_H
#define LEETCODE_KTHSMALLESTELEMENTINASORTEDMATRIX_H


#include "../Base.h"

class KthSmallestElementInASortedMatrix: public Base {
    int kth_smallest(vector<vector<int>>& matrix, int k);
    int kth_smallest2(vector<vector<int>>& matrix, int k);
    int kth_smallest3(vector<vector<int>>& matrix, int k);
    static bool cmp(const vector<int> & a, const vector<int> & b){return a[0] > b[0];}
public:
    void run();
};


#endif //LEETCODE_KTHSMALLESTELEMENTINASORTEDMATRIX_H
