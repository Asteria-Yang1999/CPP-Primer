#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int a;
    while (cin >> a) {
        v.push_back(a);
    }
    for (auto it = v.begin(); it != v.end() - 1; it += 2) {
        cout << *it + *(it + 1) << " ";
    }
    if (v.size() / 2 != 0) cout << *(v.end() - 1) << endl; 
    return 0;
}