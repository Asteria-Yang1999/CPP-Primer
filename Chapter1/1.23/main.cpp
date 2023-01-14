#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item cur, val;
    std::cout << "Please enter sale records: " << std::endl;
    if (std::cin >> cur) {
        int cnt = 1;
        while (std::cin >> val) {
            if (cur.isbn == val.isbn) {
                ++cnt;
            } else {
                std::cout << cur.isbn << " occurs " << cnt << " times" << std::endl;
                cur = val;
                cnt = 1;
            }
        }
        std::cout << cur.isbn << " occurs " << cnt << " times" << std::endl;
    } else {
        std::cout << "no datas" << std::endl;
        return -1;
    }
    return 0;
}