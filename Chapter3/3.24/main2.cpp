#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int a;
    while (cin >> a)
    {
        v.push_back(a);
    }
    if (v.cbegin() == v.cend()) {
        return -1;
    }
    auto beg = v.begin();
    auto end = v.end();
    for (auto it = beg; it != beg + (end - beg) / 2; ++it) {
        cout << (*it + *(beg + (end - it) - 1)) << " ";
    }
    if (v.size() % 2 != 0) {
        cout << *(beg + (end - beg) / 2);
    }
    return 0;
}