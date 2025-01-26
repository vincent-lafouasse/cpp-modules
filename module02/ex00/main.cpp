#include <iostream>
#include "Fixed.hpp"

int main() {
    Fixed a;
    Fixed b(a);
    Fixed c = b;

    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
}
