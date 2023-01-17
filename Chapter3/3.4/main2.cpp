#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
    getline(cin, a);
    getline(cin, b);
    if (a.size() != b.size()) {
        string res = a.size() > b.size() ? a : b;
        cout << res << endl;
    } else {
        cout << "same size" << endl;
    }
    
    return 0;
}