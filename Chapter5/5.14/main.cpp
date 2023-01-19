#include <iostream>
#include <string>
using namespace std;

int main() {
    string currString, preString = "", maxString;
    int currCnt = 1, maxCnt = 0;
    while (cin >> currString) {
        if (currString == preString) {
            ++currCnt;
            if (currCnt > maxCnt) {
                maxCnt = currCnt;
                maxString = currString;
            }
        } else {
            currCnt = 1;
            
        }
        preString = currString;
    }
    if (maxCnt > 1) {
        cout << maxString << " " << maxCnt;
    } else {
        cout << "no one" << endl;
    }
    return 0;
}