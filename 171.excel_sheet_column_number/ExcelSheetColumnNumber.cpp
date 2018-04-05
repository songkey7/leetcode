//
// Created by Qi Song on 06/04/2018.
//

#include "ExcelSheetColumnNumber.h"

int ExcelSheetColumnNumber::title_to_number(string s) {
    int ret = 0;
    for(auto c: s){
        ret = ret * 26 + c - 'A' + 1;
    }
    return ret;
}

void ExcelSheetColumnNumber::run() {
    assert(title_to_number("AB") == 28);
}
