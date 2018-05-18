//
// Created by Qi Song on 18/05/2018.
//

#include "CompareVersionNumbers.h"

int CompareVersionNumbers::compare_version(string version1, string version2) {
    int n1 = version1.size(), n2 = version2.size();
    int v1 = 0, v2 = 0;
    for(int i = 0, j = 0; i < n1 || j < n2; ++i, ++j){
        while(i < n1 && version1[i] != '.'){
            v1 = v1 * 10 + (version1[i++] - '0');
        }
        while(j < n2 && version2[j] != '.'){
            v2 = v2 * 10 + (version2[j++] - '0');
        }
        if(v1 > v2) return 1;
        else if(v1 < v2) return -1;
        v1 = 0;
        v2 = 0;
    }
    return 0;
}

void CompareVersionNumbers::run() {
    assert(compare_version("1", "01") == 0);
    assert(compare_version("0.1", "1.1") == -1);
    assert(compare_version("1.0.1", "1") == 1);
    assert(compare_version("7.5.2.4", "7.5.3") == -1);
}
