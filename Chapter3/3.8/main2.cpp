#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    decltype(s.size()) index = 0;
    while (index < s.size()) {
        s[index] = 'X';
        ++index;
    }
    cout << s << endl;
    return 0;
}