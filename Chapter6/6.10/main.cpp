#include <iostream>
using namespace std;

void swap(int *p, int *q) {
    int tmp = *p;
    *p = *q;
    *q = tmp;
}

int main() {
    int m = 10;
    int n = 20;
    int *p = &m, *q = &n;
    swap(*p, *q);
    cout << m << " " << n << endl;
    return 0;
}