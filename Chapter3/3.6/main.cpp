#include <iostream>
#include <string>
using  namespace std;

int main() {
    string a;
    getline(cin, a);
    for (auto &c : a) {
        c = 'X';
    }
    cout << a << endl;
    return 0;
}