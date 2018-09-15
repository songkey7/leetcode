//
// Created by Qi Song on 02/08/2018.
//

#include "EvaluateDivision.h"

vector<double> EvaluateDivision::
calc_equation(vector<pair<string, string>> equations, vector<double> &values, vector<pair<string, string>> queries) {
    unordered_map<string, vector<pair<string, double>>> str_map;
    for (int i = 0; i < equations.size(); ++i) {
        str_map[equations[i].first].push_back({equations[i].second, values[i]});
        str_map[equations[i].second].push_back({equations[i].first, 1.0 / values[i]});
    }

    vector<double> ret;
    for (int i = 0; i < queries.size(); ++i) {
        if(str_map.find(queries[i].first) == str_map.end() || str_map.find(queries[i].second) == str_map.end()){
            ret.push_back(-1.0);
            continue;
        }
        if(queries[i].first == queries[i].second){
            ret.push_back(1.0);
            continue;
        }
        queue<pair<string, double>> q;
        q.push({queries[i].first, 1.0});
        bool flag = false;
        unordered_set<string> visit;
        while(!q.empty()){
            int n = q.size();
            for (int j = 0; j < n; ++j) {
                auto p = q.front();
                q.pop();
                for(auto itr :str_map[p.first]){
                    double v = p.second * itr.second;
                    if(itr.first == queries[i].second){
                        ret.push_back(v);
                        flag = true;
                        break;
                    }
                    else if(visit.find(itr.first) == visit.end()){
                        q.push({itr.first, v});
                        visit.insert(itr.first);
                    }
                }
                if(flag) break;
            }
            if(flag) break;
        }
        if(!flag) ret.push_back(-1.0);
    }
    return ret;
}

void EvaluateDivision::run() {
    vector<pair<string, string>> equations = { {"a", "b"}, {"b", "c"} };
    vector<double> values = {2.0, 3.0};
    vector<pair<string, string>> queries = { {"a", "c"}, {"b", "a"}, {"a", "e"}, {"a", "a"}, {"x", "x"} };
    vector<double> ret = {6.0, 0.5, -1.0, 1.0, -1.0};
    assert(calc_equation(equations, values, queries) == ret);
}


