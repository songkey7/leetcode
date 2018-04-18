//
// Created by Qi Song on 18/04/2018.
//

#include "InsertDeleteGetRandom.h"

void InsertDeleteGetRandom::run() {
    RandomizedSet random_set;
    random_set.insert(0);
    random_set.insert(1);
    random_set.remove(0);
    random_set.insert(2);
    random_set.remove(1);
    cout << random_set.getRandom() << endl;
}
