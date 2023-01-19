#include <iostream>
using namespace std;

int main() {
    unsigned int ffCnt = 0, flCnt = 0, fiCnt = 0;
    char ch, prech = '\0';
    while (cin >> ch) {
        bool bl = true;
        if (prech == 'f') {
            switch (ch)
            {
            case 'f':
                ++ffCnt;
                bl = false;
                break;
            case 'l':
                ++flCnt;
                break; 
            case 'i':
                ++fiCnt;
                break;
            default:
                break;
            }
        }
        if (!bl) {
            prech = '\0';
        } else {
            prech = ch;
        }
    }
    cout << ffCnt << " " << flCnt << " " << fiCnt << endl;
    return 0;
}