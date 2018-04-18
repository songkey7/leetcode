//
// Created by Qi Song on 18/04/2018.
//

#include "ShuffleAnArray.h"

vector<int> ShuffleAnArray::shuffle2() {
    vector<int> result(_vec);
    for (int i = 0;i < result.size();i++) {
        int pos = rand()%(result.size()-i);
        swap(result[i+pos], result[i]);
    }
    return result;
}

vector<int> ShuffleAnArray::shuffle() {
    size_t n = _vec.size();
    vector<int> ret(n);
    unordered_set<size_t> idx_set;
    for(int i = 0; i < n; i++){
        size_t idx = rand() % n;
        while(idx_set.find(idx) != idx_set.end()){
            idx = (++idx) % n;
        }
        ret[i] = _vec[idx];
        idx_set.insert(idx);
    }
    return ret;
}

vector<int> ShuffleAnArray::reset() {
    return _vec;
}

void ShuffleAnArray::run() {
    _vec = {1,2,3};
    for(auto x: shuffle()) cout << x << " ";
    cout << endl;
    for(auto x: reset()) cout << x << " ";
    cout << endl;
    for(auto x: shuffle2()) cout << x << " ";
    cout << endl;
}


