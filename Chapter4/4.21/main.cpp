#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    const int size = 10;
    vector<int> vec;
    for (int i = 0; i < size; ++i) {
        vec.push_back(i);
    }
    for (int &v : vec) {
        if (v % 2 == 1) v *= 2;
    }
    for (int x : vec) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}