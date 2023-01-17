#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    string res;
    for (auto ch : s) {
        if (!ispunct(ch)) {
            res += ch;
        }
    }
    cout << res << endl;
    return 0;
}