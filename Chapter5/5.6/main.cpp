#include <iostream>
#include <vector>
using namespace std;

int main() {
    int grade;
    cin >> grade;
    vector<char> score = {'F', 'D', 'C', 'B', 'A'};
    // if (grade < 60) {
    //     cout << score[0];
    // } else {
    //     cout << score[(grade - 50) / 10];
    // }
    cout << (grade < 60 ? score[0] : score[(grade - 50) / 10]) << endl;
    return 0;
}