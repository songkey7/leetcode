//
// Created by Qi Song on 05/04/2018.
//

#include "MaxPointsOnALine.h"

int MaxPointsOnALine::max_points(vector<MaxPointsOnALine::Point> &points) {
    size_t n = points.size();
    if(n <= 2) return n;
    int ret = 1;
    for(int i = 0; i < n; i++){
        int tmp = 1;
        int v = 0;
        map<pair<int, int>, int> slope_map;
        for(int j = i + 1; j < n; j++){
            if(points[i].x == points[j].x && points[i].y == points[j].y){
                tmp ++;
            }else if(points[i].x == points[j].x){
                v++;
            }else{
                int a=points[j].x-points[i].x, b=points[j].y-points[i].y;
                int gcd = GCD(a, b);
                a/=gcd;
                b/=gcd;
                slope_map[make_pair(a, b)]++;
            }
        }
        ret = max(ret, tmp + v);
        for(auto s: slope_map){
            ret = max(ret, tmp + s.second);
        }
    }
    return ret;
}

int MaxPointsOnALine::GCD(int a, int b) {
    if(b==0) return a;
    else return GCD(b, a%b);
}

void MaxPointsOnALine::run() {
    //vector<Point> points = {Point(0,0), Point(94911151,94911150), Point(94911152,94911151)};
    //assert(max_points(points) == 2);
    vector<Point> points = {Point(1,1), Point(2,2), Point(3,3)};
    assert(max_points(points) == 3);
}
