//
// Created by songkey on 2020/3/6.
//

#ifndef LEETCODE_COMPARESTRINGSBYFREQUENCYOFTHESMALLESTCHARACTER_H
#define LEETCODE_COMPARESTRINGSBYFREQUENCYOFTHESMALLESTCHARACTER_H


#include "../Base.h"

class CompareStringsByFrequencyOfTheSmallestCharacter: public Base {
    vector<int> numSmallerByFrequency(vector<string> queries, vector<string> words);
    int f(string s);
    int binary_search(vector<int> v, int x);
public:
    void run() override ;

};


#endif //LEETCODE_COMPARESTRINGSBYFREQUENCYOFTHESMALLESTCHARACTER_H
