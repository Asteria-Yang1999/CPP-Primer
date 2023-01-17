#include <iostream>
#include <string>
#include <iterator>
using namespace std;

int main() {
    int a[10];
    for (int i = 0; i < 10; ++i) {
        a[i] = 10;
    }
    int *p = a;
    int *last = end(a);
    while (p != last) {
        *p = 0;
        ++p;
    }
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}