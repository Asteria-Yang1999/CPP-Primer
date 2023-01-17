#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    vector<int> v;
    while (cin >> a) {
        v.push_back(a);
    }
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}