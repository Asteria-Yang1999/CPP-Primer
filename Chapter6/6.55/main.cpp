#include <iostream>
#include <vector>

using namespace std;

int func1(int a, int b) {
    return a + b;
}

int func2(int a, int b) {
    return a - b;
}

int func3(int a, int b) {
    return a * b;
}

int func4(int a, int b) {
    return a / b;
}

void Compute(int a, int b, int (*p)(int, int)) {
    cout << p(a, b) << endl;
}

int main() {
    int i = 10, j = 5;
    decltype(func1) *p1 = func1, *p2 = func2, *p3 = func3, *p4 = func4;
    vector<decltype(func1)*> vec = {p1, p2, p3, p4};
    for (auto p : vec) {
        Compute(i, j, p);
    }
    return 0;

}