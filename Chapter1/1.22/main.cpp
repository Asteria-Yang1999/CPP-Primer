#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item total, trans;
    std::cout << "Please enter sale record of same ISBN: " << std::endl;
    if (std::cin >> total) {
        while (std::cin >> trans) {
            if (total.isbn == trans.isbn) {
                total = total + trans;
            } else {
                std::cout << "error1" << std::endl;
                return -1;
            }
        }
        std::cout << total << std::endl;
    } else {
        std::cout << "error2" << std::endl;
        return -1;
    }
    return 0;
}