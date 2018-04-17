//
// Created by Qi Song on 17/04/2018.
//

#ifndef LEETCODE_FLATTENNESTEDLISTITERATOR_H
#define LEETCODE_FLATTENNESTEDLISTITERATOR_H


#include <utility>

#include "../Base.h"

class FlattenNestedListIterator: public Base {
    class NestedInteger {
        int item;
        bool b;
        vector<NestedInteger> items;
      public:
        explicit NestedInteger(int x): item(x), b(true){}

        explicit NestedInteger(vector<NestedInteger> x): items(std::move(x)), b(false){}

        // Return true if this NestedInteger holds a single integer, rather than a nested list.
        bool isInteger() const{
            return b;
        };

        // Return the single integer that this NestedInteger holds, if it holds a single integer
        // The result is undefined if this NestedInteger holds a nested list
        int getInteger() const{
            return item;
        };

        // Return the nested list that this NestedInteger holds, if it holds a nested list
        // The result is undefined if this NestedInteger holds a single integer
        const vector<NestedInteger> &getList() const{
            return items;
        };
    };

    class NestedIterator {
    public:
        stack<NestedInteger> nodes;
        NestedIterator(vector<NestedInteger> &nestedList) {
            for(int i = nestedList.size() - 1; i >= 0; i--){
                nodes.push(nestedList[i]);
            }
        }

        int next() {
            NestedInteger item = nodes.top();
            nodes.pop();
            return item.getInteger();
        }

        bool hasNext() {
            while(!nodes.empty()){
                NestedInteger item = nodes.top();
                if(item.isInteger()) return true;
                else{
                    nodes.pop();
                    auto list = item.getList();
                    for(int i = list.size() - 1; i >= 0; i--) {
                        nodes.push(list[i]);
                    }
                }
            }
            return false;
        }
    };
public:
    void print(NestedIterator itr);
    void run();
};


#endif //LEETCODE_FLATTENNESTEDLISTITERATOR_H
