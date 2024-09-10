#include <iostream>

int main() {
    int a = 3;
    int* pa = &a;

    std::cout << "The address of a is -->" << &a << std::endl;
    std::cout << "The value of a is -->" << a << std::endl;
    std::cout << "The address of a is -->" << pa << std::endl;
    std::cout << "The value pointed to a by pa is -->" << *pa << std::endl;

    return 0;
}
