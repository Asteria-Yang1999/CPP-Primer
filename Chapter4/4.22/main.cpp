#include <iostream>
#include <string>
using namespace std;

int main() {
    int grade;
    cin >> grade;
    string finalGrade =  (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade > 60) ? "low pass" : "fail";
    cout << finalGrade << endl;
    return 0;
}