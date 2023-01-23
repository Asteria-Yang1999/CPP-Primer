#include <iostream>
using namespace std;

int sum(initializer_list<int> il) {
    int res = 0;
    for (auto beg = il.begin(); beg != il.end(); ++beg) {
        res += *beg;
    }
    return res;
}

int main() {
    cout << sum({1, 2, 3}) << endl;
    return 0; 
} 