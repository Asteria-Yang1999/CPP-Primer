#include <iostream>
using namespace std;

int count() {
    static int num = 0;
    return num++;
}

int main() {
    for (int i = 1; i < 10; ++i) {
        cout << count() << endl;
    }
    return 0;
}