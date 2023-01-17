#include <iostream>
#include <string>
using namespace std;

int main() {
    string total;
    string single;
    char cont = 'y';
    while (cin >> single) {
        if (!total.size()) {
            total += single;
        } else {
            total = total + " " + single;
        }
        cin >> cont;
        if (cont == 'y' || cont == 'Y') continue;
        else break;
        // total = total + " ";
    }
    cout << total << endl;
    return 0;
}