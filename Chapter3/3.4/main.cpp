#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
    getline(cin, a);
    getline(cin, b);
    string res = a > b ? a : b;
    cout << res << endl;
    return 0;
}