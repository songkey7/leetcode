//
// Created by Qi Song on 03/04/2018.
//

#include "WordLadder.h"

int WordLadder::ladder_length_dfs(string begin_word, string end_word, vector<string> &word_list) {
    if(find(word_list.begin(), word_list.end(), end_word) == word_list.end()) return 0;
    v_map[begin_word] = true;
    if(distance1(begin_word, end_word)) return 2;
    int ret = 0;
    for(int i = 0; i < word_list.size(); i++){
        if(!v_map[word_list[i]]){
            if(distance1(begin_word, word_list[i])){
                v_map[word_list[i]] = true;
                int tmp = ladder_length_dfs(word_list[i], end_word, word_list);
                tmp = tmp == 0 ? 0 : tmp + 1;
                if(tmp != 0) ret = ret == 0 ? tmp : min(ret, tmp);
                v_map[word_list[i]] = false;
            }
        }
    }
    return ret;
}

int WordLadder::ladder_length_bfs(string begin_word, string end_word, vector<string> &word_list) {
    queue<string> q;
    unordered_set<string> word_dict(word_list.begin(), word_list.end());
    add_next_words(begin_word, word_dict, q);
    int depth = 2;
    while(!q.empty()){
        size_t n = q.size();
        for(int i = 0; i < n; i++){
            string s = q.front();
            q.pop();
            if(end_word == s) return depth;
            add_next_words(s, word_dict, q);
        }
        depth++;
    }
    return 0;
}

void WordLadder::add_next_words(string word, unordered_set<string>& word_dict, queue<string>& toVisit) {
    word_dict.erase(word);
    for (int p = 0; p < word.length(); p++) {
        char letter = word[p];
        for (int k = 0; k < 26; k++) {
            word[p] = 'a' + k;
            if (word_dict.find(word) != word_dict.end()) {
                toVisit.push(word);
                word_dict.erase(word);
            }
        }
        word[p] = letter;
    }
}

bool WordLadder::distance1(string s1, string s2) {
    int cnt = 0;
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] != s2[i]) cnt++;
        if(cnt == 2) return false;
    }
    return cnt == 1;
}

void WordLadder::run() {
    vector<string> word_list = {"hot","dot","dog","lot","log","cog"};
    assert(ladder_length_bfs("hit", "cog", word_list) == 5);
    vector<string> word_list1 = {"hot","dot","dog","lot","log"};
    assert(ladder_length_bfs("hit", "cog", word_list1) == 0);
    vector<string> word_list2 = {"peale","wilts","place","fetch","purer","pooch","peace","poach","berra","teach","rheum","peach"};
    assert(ladder_length_bfs("teach", "place", word_list2) == 4);
}


