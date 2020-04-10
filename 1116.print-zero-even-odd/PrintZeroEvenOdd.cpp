//
// Created by songkey on 2020/3/31.
//

#include <thread>
#include "PrintZeroEvenOdd.h"

std::mutex m_odd;
std::mutex m_even;
std::mutex m_zero;

void PrintZeroEvenOdd::zero() {
    for (int i = 1; i <= n; ++i) {
        m_zero.lock();
        printNumber(0);
        if (i % 2 == 1) m_odd.unlock();
        else m_even.unlock();
    }
}

void PrintZeroEvenOdd::even() {
    for (int i = 2; i <= n; i+=2) {
        m_even.lock();
        printNumber(i);
        m_zero.unlock();
    }
}

void PrintZeroEvenOdd::odd() {
    for (int i = 1; i <= n; i+=2) {
        m_odd.lock();
        printNumber(i);
        m_zero.unlock();
    }
}

void PrintZeroEvenOdd::printNumber(int i) {
    cout << i << " ";
}

void PrintZeroEvenOdd::run() {
    m_even.lock();
    m_odd.lock();
    std::thread t1(zero);
    std::thread t2(odd);
    std::thread t3(even);
    t1.join();
    t2.join();
    t3.join();
}

