#include <iostream>

int main() {
    int sum = 0, value = 0;
    std::cout << "Please input some numbers, press Ctrl + z to end" << std::endl;
    for (; std::cin >> value; ) {
        sum += value;
    }
    std::cout << "The sum of input numbers is " << sum << std::endl;
    return 0;
}