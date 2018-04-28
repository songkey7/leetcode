//
// Created by Qi Song on 28/04/2018.
//

#include "IntegerToRoman.h"

string IntegerToRoman::int_to_roman(int num) {
    string ret = "";
    int idx = 10000;
    vector<vector<char>> c_map = {{'I', 'V', 'X'}, {'X', 'L', 'C'}, {'C', 'D', 'M'}, {'M', ' ', ' '}};
    for(int i = 3; i >= 0; i--){
        idx = idx / 10;
        int tmp = num / idx;
        num = num % idx;

        if(tmp < 4)
            while(tmp--) ret += c_map[i][0];
        else if(tmp == 4)
            ret = ret + c_map[i][0] + c_map[i][1];
        else if(tmp < 9){
            ret += c_map[i][1];
            while(tmp-- > 5) ret += c_map[i][0];
        }
        else if(tmp == 9){
            ret = ret + c_map[i][0] + c_map[i][2];
        }
    }

    return ret;
}

void IntegerToRoman::run() {
    assert(int_to_roman(3) == "III");
    assert(int_to_roman(4) == "IV");
    assert(int_to_roman(9) == "IX");
    assert(int_to_roman(58) == "LVIII");
    assert(int_to_roman(1994) == "MCMXCIV");
}
