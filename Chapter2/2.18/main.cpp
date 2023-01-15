#include <iostream>

int main() {
    int i = 5;
    int *p1 = &i;
    int *p2;
    *p2 = i;
    std::cout << p1 << " " << *p2 << std::endl;
    int n = 10;
    p1 = &n;
    *p2 = 20;
    std::cout << p1 << " " << *p2 << std::endl;
    return 0;

}