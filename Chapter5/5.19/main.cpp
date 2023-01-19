#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    string con;
    do {
        cout << "Please enter two strings: " << endl;
        cin >> s1 >> s2;
        string res = s1.size() < s2.size() ? s1 : s2;
        cout << res << endl;
        cout << "continue enter yes or no? " << endl;
        cin >> con;
    } while (!con.empty() && con[0] != 'n');
    return 0;
}