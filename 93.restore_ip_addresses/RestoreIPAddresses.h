//
// Created by Qi Song on 15/05/2018.
//

#ifndef LEETCODE_RESTOREIPADDRESSES_H
#define LEETCODE_RESTOREIPADDRESSES_H


#include "../Base.h"

class RestoreIPAddresses: public Base {
    vector<string> restore_ip_addresses(string s);
    void dfs(string ip, int i, string s, vector<string> &ret);
public:
    void run();
};


#endif //LEETCODE_RESTOREIPADDRESSES_H
