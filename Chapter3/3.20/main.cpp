#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a;
    vector<int> v;
    while (cin >> a) {
        v.push_back(a);
    }

    for (size_t i = 0; i < v.size() - 1; ++i) {
        cout << v[i] + v[i + 1] << " ";
    }
    cout << endl;
    return 0;
}