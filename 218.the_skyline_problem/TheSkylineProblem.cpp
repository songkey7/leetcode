//
// Created by user on 05/03/2018.
//

#include "TheSkylineProblem.h"

vector<pair<int, int>> TheSkylineProblem::get_skyline(vector<vector<int>> &buildings) {
    vector<pair<int, int>> tmp;
    for(auto x: buildings){
        tmp.push_back({x[0], -x[2]});
        tmp.push_back({x[1], x[2]});
    }

    sort(tmp.begin(), tmp.end(), [](const pair<int, int> &a, pair<int, int> &b){return a.first < b.first || (a.first == b.first && a.second < b.second);});

    vector<pair<int, int>> ret;
    vector<int>q;
    q.push_back(0);
    for(auto x: tmp){
        if(x.second < 0){
            int i = 0;
            while(-x.second < q[i]) i++;
            q.insert(q.begin() + i, -x.second);
        } else{
            int i = 0;
            while(x.second != q[i]) i++;
            q.erase(q.begin() + i);
        }
        if(ret.empty() || q[0] != ret.back().second){
            ret.push_back({x.first, q[0]});
        }
    }

    return ret;
}

void TheSkylineProblem::run() {
    vector<vector<int>> buildings = {{2,9,10},{3,7,15},{5,12,12},{15,20,10},{19,24,8}};
    vector<pair<int, int>> ret = {{2, 10}, {3, 15}, {7, 12}, {12, 0}, {15, 10}, {20, 8}, {24, 0}};
    //vector<vector<int>> buildings = {{0,2,3},{2,5,3}};
    //vector<pair<int, int>> ret = {{0, 3}, {5, 0}};
    assert(get_skyline(buildings) == ret);
}
