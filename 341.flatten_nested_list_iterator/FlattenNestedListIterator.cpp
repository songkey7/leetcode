//
// Created by Qi Song on 17/04/2018.
//

#include "FlattenNestedListIterator.h"

void FlattenNestedListIterator::print(NestedIterator itr) {
    while(itr.hasNext()){
        cout << itr.next() << " ";
    }
    cout << endl;
}

void FlattenNestedListIterator::run() {
    NestedInteger x1({NestedInteger(1), NestedInteger(1)});
    vector<NestedInteger> nums1 = {x1, NestedInteger({2}), x1};
    print(NestedIterator(nums1));
}


