//
// Created by Qi Song on 04/06/2018.
//

#include "TextJustification.h"

vector<string> TextJustification::full_justify(vector<string> &words, int maxWidth) {
    size_t n = words.size();
    if(n == 0) return {};
    size_t len1 = words[0].length(), len2 = len1;
    int b = 0, e = 1;
    vector<string> ret;
    for (; e < n; ++e) {
        size_t l = words[e].length();
        if(len1 + 1 + l > maxWidth){
            string tmp(maxWidth, ' ');
            int idx = 0;
            for (char c : words[b]) tmp[idx++] = c;
            if(e - b > 1){
                int k1 = (maxWidth - len2) / (e - b - 1);
                int k2 = (maxWidth - len2) % (e - b - 1);
                for (int i = b + 1; i < e; ++i) {
                    if(i - b <= k2) idx++;
                    idx += k1;
                    for (char c : words[i]) tmp[idx++] = c;
                }
            }
            ret.push_back(tmp);
            len1 = len2 = l;
            b = e;
        }
        else{
            len1 += (1 + l);
            len2 += l;
        }
    }
    string tmp(maxWidth, ' ');
    for (int idx = 0, i = b; i < n; ++i) {
        if(i != b) idx++;
        for (char c : words[i]) tmp[idx++] = c;
    }
    ret.push_back(tmp);
    return ret;
}

void TextJustification::run() {
    vector<string> words1 = {"This", "is", "an", "example", "of", "text", "justification."};
    vector<string> ret1 = {"This    is    an",
                           "example  of text",
                           "justification.  "};
    assert(full_justify(words1, 16) == ret1);

    vector<string> words2 = {"What","must","be","acknowledgment","shall","be"};
    vector<string> ret2 = {"What   must   be",
                           "acknowledgment  ",
                           "shall be        "};
    assert(full_justify(words2, 16) == ret2);

    vector<string> words3 = {"Science","is","what","we","understand","well","enough","to","explain",
                             "to","a","computer.","Art","is","everything","else","we","do"};
    vector<string> ret3 = { "Science  is  what we",
                            "understand      well",
                            "enough to explain to",
                            "a  computer.  Art is",
                            "everything  else  we",
                            "do                  "};
    assert(full_justify(words3, 20) == ret3);
}
