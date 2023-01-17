#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a;
    vector<int> v;
    while (cin >> a) {
        v.push_back(a);
    }

    for (size_t i = 0; i < v.size() / 2; ++i) {
        cout << v[i] + v[v.size() - i - 1] << " ";
    }
    if (v.size() % 2 != 0) cout << v[v.size() / 2];
    cout << endl;
    return 0;
}