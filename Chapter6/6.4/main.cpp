#include <iostream>
using namespace std;

int fact(int num) {
    int res = 1;
    for (int i = num; i > 0; --i) {
        res *= i;
    }
    return res;
}

int main() {
    int val;
    cin >> val;
    cout << fact(val) << endl;
    return 0;
}