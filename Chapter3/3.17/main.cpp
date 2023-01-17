#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    vector<string> v;
    while (cin >> s) {
        for (char &ch : s) {
            ch = toupper(ch);
        }
        v.push_back(s);
    }
    for (auto b : v) {
        cout << b << " ";
    }
    cout << endl;
    return 0;
}