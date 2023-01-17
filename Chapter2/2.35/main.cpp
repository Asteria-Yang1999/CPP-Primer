#include <iostream>
#include <typeinfo>

int main() {
    const int i = 42;     //i: const int
    auto j = i;             //j: int
    const auto &k = i;      //k: const int reference
    auto *p = &i;       //p: pointer to const int 
    const auto j2 = i, &k2 = i;    //j2: int             k2: int reference
    std::cout << typeid(i).name() << std::endl;
    std::cout << typeid(j).name() << std::endl;
    std::cout << typeid(k).name() << std::endl;
    std::cout << typeid(p).name() << std::endl;
    std::cout << typeid(j2).name() << std::endl;
    std::cout << typeid(k2).name() << std::endl;

    return 0;
}