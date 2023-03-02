// g++ -std=gnu++17 constexpr_and_const.cpp
#include <array>
#include <iostream>
using namespace std;

constexpr int sqr1(int arg) {
    return arg * arg;
}

const int sqr2(int arg) {
    return arg * arg;
}

int main() {
    array<int, sqr1(10)> mylist1;
    array<int, sqr2(10)> mylist1;  // error: sqr2(10) is a read-only var, not const var
    return 0;
}
