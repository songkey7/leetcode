//
// Created by songkey on 2020/2/28.
//

#include "DistantBarcodes.h"

vector<int> DistantBarcodes::rearrangeBarcodes(vector<int> &barcodes) {
    map<int, int> counter;
    for(auto x: barcodes){
        counter[x]++;
    }
    deque<pair<int, int>> q(counter.begin(), counter.end());
    sort(q.begin(), q.end(), [](pair<int, int> &a, pair<int, int> &b){ return a.second > b.second; });
    vector<int> ret(barcodes.size());
    int i = 0;
    for (auto itr: q) {
        while(itr.second-- > 0){
            ret[i] = itr.first;
            i+=2;
            if(i >= barcodes.size()) i = 1;
        }
    }
    return ret;
}

void DistantBarcodes::run() {
    vector<int> arr1 = {1,1,1,2,2,2};
    print_vector(rearrangeBarcodes(arr1), arr1.size());

    vector<int> arr2 = {1,1,1,1,2,2,3,3};
    print_vector(rearrangeBarcodes(arr2), arr1.size());
}
