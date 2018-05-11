//
// Created by Qi Song on 09/05/2018.
//

#include "SimplifyPath.h"

string SimplifyPath::simplify_path(string path) {
    string ret;
    int n = path.length();
    if(n == 0) return ret;
    stack<string> st;
    int i = path[0] == '/' ? 1 : 0;
    path.push_back('/');
    while(i < n){
        int pos = path.find('/', i);
        string tmp = path.substr(i, pos - i + 1);
        i = pos + 1;
        if(tmp == "./" || tmp == "/");
        else if(tmp == "../") {
            if(!st.empty()) st.pop();
        }
        else st.push(tmp);
    }
    while(!st.empty()){
        ret = st.top() + ret;
        st.pop();
    }
    if(ret[ret.length() - 1] == '/') ret.pop_back();
    return '/' + ret;
}

void SimplifyPath::run() {
    assert(simplify_path("/") == "/");
    assert(simplify_path("/home/") == "/home");
    assert(simplify_path("/a/./b/../../c/") == "/c");
    assert(simplify_path("/home/foo/.bashrc") == "/home/foo/.bashrc");
}
