//
// Created by Qi Song on 15/05/2018.
//

#include "RestoreIPAddresses.h"

vector<string> RestoreIPAddresses::restore_ip_addresses(string s) {
    int n = s.length();
    if(n < 4 || n > 12) return {};
    vector<string> ret;
    dfs(s, 3, "", ret);
    return ret;
}

void RestoreIPAddresses::dfs(string ip, int i, string s, vector<string> &ret){
    if(ip == "" || i < 0) return;
    if(i == 0){
        int tmp = atoi(ip.c_str());
        if(ip == "0" || (tmp < 256 && ip[0] != '0'))
            ret.push_back(s + "." + ip);
    }
    else{
        int n = ip[0] == '0' ? 1 : 3;
        for (int j = 1; j <= n; ++j) {
            string ss = ip.substr(0, j);
            int tmp = atoi(ss.c_str());
            if(tmp < 256){
                ss = s != "" ? s + "." + ss : ss;
                if(ip.length() > j) dfs(ip.substr(j), i - 1, ss, ret);
            }
        }
    }
}

void RestoreIPAddresses::run() {
    vector<string> ret = {"255.255.11.135", "255.255.111.35"};
    assert(restore_ip_addresses("25525511135") == ret);
    for(auto s: restore_ip_addresses("010010")) cout << s << endl;
}
