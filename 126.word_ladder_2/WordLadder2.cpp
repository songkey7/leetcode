//
// Created by songkey on 2018/6/1.
//

#include "WordLadder2.h"

vector<vector<string>> WordLadder2::find_ladders(string beginWord, string endWord, vector<string> &wordList) {
    deque<vector<string>> paths;
    paths.push_back({beginWord});
    unordered_map<string, bool> visit_map;
    for (auto word: wordList) {
        visit_map[word] = false;
    }
    vector<vector<string>> ret;
    bool flag = false;
    while(!paths.empty()){
        size_t len = paths.size();
        for (int i = 0; i < len; ++i) {
            vector<string> path = paths.front();
            paths.pop_front();
            string last = path.back();
            for (int j = 0; j < last.size(); ++j) {
                string s = last;
                for (int k = 0; k < 26; ++k) {
                    s[j] = char('a' + k);
                    if(visit_map.find(s) != visit_map.end() && !visit_map[s]){
                        vector<string> tmp = path;
                        tmp.push_back(s);
                        paths.push_back(tmp);
                        if(endWord == s) {
                            ret.push_back(tmp);
                            flag = true;
                        }
                    }
                }
            }
        }
        if(flag) break;
        for (auto path: paths) {
            visit_map[path.back()] = true;
        }
    }
    return ret;
}

void WordLadder2::run() {
    vector<string> word_list = {"hot","dot","dog","lot","log","cog"};
    vector<vector<string>> ret = {{"hit","hot","dot","dog","cog"},
                                  {"hit","hot","lot","log","cog"}};
    assert(find_ladders("hit", "cog", word_list) == ret);

    vector<string> word_list2 = {"ted","tex","red","tax","tad","den","rex","pee"};
    vector<vector<string>> ret2 = {{"red","ted","tad","tax"},
                                   {"red","ted","tex","tax"},
                                   {"red","rex","tex","tax"}};
    assert(find_ladders("red", "tax", word_list2) == ret2);
}


