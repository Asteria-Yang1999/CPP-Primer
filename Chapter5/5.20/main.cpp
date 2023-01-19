#include <iostream>
#include <string>
using namespace std;

int main() {
    string currStr, preStr = "";
    bool bl = true;
    while (cin >> currStr) {
        if (!isupper(currStr[0])) continue;
        if (currStr == preStr) {
            bl = false;
            cout << currStr;
            break;
        } else {
            preStr = currStr;
        }
    }
    if (bl) cout << "no one " << endl;
    return 0;
}