#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    if (a > b) {
        for (int i = b; i <= a; ++i) {
            cout << i << endl;
        }
    } else {
        for (int i = a; i <= b; ++i) {
            cout << i << endl;
        }
    }
    return 0;
}