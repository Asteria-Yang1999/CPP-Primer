#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item trans1, trans2;
    std::cout << "Please enter two same sale record: " << std::endl;
    std::cin >> trans1 >> trans2;
    if (trans1.isbn == trans2.isbn) {
        std::cout << trans1 + trans2 << std::endl;
    } else {
        std::cout << "error!" << std::endl;
    }
    return 0;
}