#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string a;
    vector<string> v;
    while (cin >> a) {
        v.push_back(a);
    }
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}