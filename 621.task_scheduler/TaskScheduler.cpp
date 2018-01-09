//
// Created by Qi Song on 1/9/18.
//

#include "TaskScheduler.h"

int TaskScheduler::least_interval(vector<char> &tasks, int n) {
    vector<int> remain(26, 0);
    vector<int> cnt(26, 0);
    for(auto t: tasks){
        remain[t - 'A']++;
    }
    int ret = 0;
    int len = (int)tasks.size();
    while (len > 0){
        int idx = -1;
        int m = 0;
        for(int i = 0; i < 26; i++){
            if(remain[i] > m && cnt[i] <= 0) {
                idx = i;
                m = remain[i];
            }
        }
        if(idx > -1){
            remain[idx]--;
            cnt[idx] = n + 1;
            len--;
        }
        ret ++;
        for(auto &x: cnt) x--;
    }
    return ret;
}

int TaskScheduler::least_interval2(vector<char> &tasks, int n) {
    unordered_map<char, int> mp;
    int m = 0;
    for(auto x: tasks) {
        mp[x]++;
        if(mp[x] > m) m = mp[x];
    }
    int ret = (m - 1) * (n + 1);
    for(auto x: mp) if(x.second == m) ret ++;
    return max(ret, (int)tasks.size());
}

void TaskScheduler::run() {
    vector<char> tasks = {'A','A','A','B','B','B'};
    int n = 2;
    assert(least_interval(tasks, n) == 8);
    assert(least_interval2(tasks, n) == 8);
}

