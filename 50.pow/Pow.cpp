//
// Created by Qi Song on 23/03/2018.
//

#include "Pow.h"

double Pow::pow(double x, int n) {
    if(n == 0) return 1;
    double t = pow(x, n / 2);
    if(n % 2) return (n < 0) ? 1 / x * t * t : x * t * t;
    return t * t;
}

void Pow::run() {
    assert(fabs(pow(2.0, 10) - 1024.0) < EPSILON);
    assert(fabs(pow(2.1, 3) - 9.26100) < EPSILON);
    assert(fabs(pow(22.14659, -2) - 0.002038855) < EPSILON);
}
