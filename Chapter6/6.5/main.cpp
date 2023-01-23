#include <iostream>
using namespace std;

int mo(int val) {
    return val > 0 ? val : (-val);
}

int main() {
    int num;
    cin >> num;
    cout << mo(num) << endl;
    return 0;
}