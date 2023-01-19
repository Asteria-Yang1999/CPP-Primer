#include <iostream>
using namespace std;

int main() {
    unsigned int vowelCnt = 0;
    char ch;
    while (cin >> ch) {
        if (ch == 'a') {
            ++vowelCnt;
        }
        if (ch == 'e') {
            ++vowelCnt;
        }
        if (ch == 'i') {
            ++vowelCnt;
        }
        if (ch == 'o') {
            ++vowelCnt;
        }
        if (ch == 'u') {
            ++vowelCnt;
        }
    }
    cout << vowelCnt << endl;
    return 0;
}