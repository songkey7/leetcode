//
// Created by Qi Song on 27/04/2018.
//

#include "ZigZagConversion.h"

string ZigZagConversion::convert(string s, int numRows) {
    if(numRows == 1) return s;
    string ret = "";
    int k = 2 * (numRows - 1);
    for(int i = 0; i < numRows; i++){
        for(int j = 0; i + j * k < s.length(); j++){
            ret += s[i + j * k];
            if(i != 0 && i != numRows - 1 && (j + 1) * k - i < s.length()) ret += s[(j + 1) * k - i];
        }
    }
    return ret;
}

void ZigZagConversion::run() {
    assert(convert("A", 1) == "A");
    assert(convert("PAYPALISHIRING", 3) == "PAHNAPLSIIGYIR");
    assert(convert("PAYPALISHIRING", 4) == "PINALSIGYAHRPI");
}
