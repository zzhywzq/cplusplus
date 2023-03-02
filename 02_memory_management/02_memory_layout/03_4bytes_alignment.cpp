// principle:
// 1. start_addr of member of struct must be a multiple of 4
// 2. sizeof(struct) must be a multiple of 4
#include <iostream>
using namespace std;

struct Data2 {
    char a[4];
    int b;
} Node2;

struct Data3 {
    char a[5];
    int b;
} Node3;

struct Data4 {
    int a;
    char b;
    union MyUnion {
        int* ptr;
        short num;
    };
} Node4;

struct Data5 {
    char a[5];
} Node5;

int main() {
    cout << sizeof(Node2) << endl;  // 8=4+1+3(for sizeof)
    cout << sizeof(Node3) << endl;  // 12=5+3(for start_addr)+1+3(for sizeof)
    cout << sizeof(Node4) << endl;  // 8=4+1+3(for sizeof), ignore union for it do not take any place
    cout << sizeof(Node5) << endl;  // 5, ignore one member attr struct for it do not need to fill
    return 0;
}
