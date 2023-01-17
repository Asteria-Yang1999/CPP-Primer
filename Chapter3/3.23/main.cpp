#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    vector<int> vec;
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; i++) {
        vec.push_back( rand() % 1000);
    }
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        (*it) = 2 * (*it);
        cout << *it << endl;
    }
    return 0;
}