//
// Created by songkey on 2020/3/10.
//

#include "ConvertANumberToHexadecimal.h"

string ConvertANumberToHexadecimal::toHex(int num) {
    if (num == 0) return "0";
    string ret;
    uint32_t n = static_cast<uint32_t>(num);
    while(n) {
        int a = n % 16;
        char s = a < 10 ? a + '0' : (a  - 10) + 'a';
        ret = s + ret;
        n = n / 16;
    }
    return ret;
}

void ConvertANumberToHexadecimal::run() {
    assert(toHex(26) == "1a");
    assert(toHex(-1) == "ffffffff");
}
