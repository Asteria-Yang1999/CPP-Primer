#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> score;
    vector<int> res(11);
    int a;
    while (cin >> a) {
        score.push_back(a);
    }
    for (auto it = score.begin(); it != score.end(); ++it) {
        res[((*it) / 10)]++;
    }
    for (int b : res) {
        cout << b << " ";
    }
    cout << endl;
    return 0;
}