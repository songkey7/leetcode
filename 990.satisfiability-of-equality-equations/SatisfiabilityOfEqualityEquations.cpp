//
// Created by songkey on 2020/3/29.
//

#include "SatisfiabilityOfEqualityEquations.h"

bool SatisfiabilityOfEqualityEquations::dfs(unordered_map<char, set<char>> &graph, char s, char t, set<char> &visit) {
    for(auto v: graph[s]) {
        if(visit.count(v) > 0) continue;
        visit.insert(v);
        if(v == t || !dfs(graph, v, t, visit)) return false;
    }
    return true;
}

bool SatisfiabilityOfEqualityEquations::equationsPossible2(vector<string> equations) {
    unordered_map<char, set<char>> graph;
    set<pair<char, char>> ne;
    for(auto e: equations) {
        if(e[1] == '=') {
           graph[e[0]].insert(e[3]);
           graph[e[3]].insert(e[0]);
        }
        else {
           if(e[0] == e[3]) return false;
           ne.insert({e[0], e[3]});
        }
    }
    for(auto e: ne) {
        set<char> visit;
        visit.insert(e.first);
        if(!dfs(graph, e.first, e.second, visit)) return false;
    }
    return true;
}

bool SatisfiabilityOfEqualityEquations::equationsPossible(vector<string> equations) {
    vector<int> pre(26, 0);
    for (int i = 0; i < 26; ++i) {
        pre[i] = i;
    }
    for(const auto &e: equations) {
        if(e[1] == '=') pre[find(e[0] - 'a', pre)] = pre[find(e[3] - 'a', pre)];
    }
    for(const auto &e: equations) {
        if(e[1] == '!' && pre[find(e[0] - 'a', pre)] == pre[find(e[3] - 'a', pre)]) return false;
    }
    return true;
}

int SatisfiabilityOfEqualityEquations::find(int x, vector<int> &pre) {
    if(pre[x] != x) pre[x] = find(pre[x], pre);
    return pre[x];
}

void SatisfiabilityOfEqualityEquations::run() {
    assert(!equationsPossible2({"a==b","e==c","b==c","a!=e"}));
    assert(!equationsPossible({"a==b","b!=c","c==a"}));
    assert(equationsPossible({"a==b","b==a"}));
    assert(equationsPossible({"c==c","b==d","x!=z"}));
}

