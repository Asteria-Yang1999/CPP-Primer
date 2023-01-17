#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    for (decltype(s.size()) index = 0; index < s.size(); ++index) {
        s[index] = 'X';
    }
    cout << s << endl;
    return 0;
}