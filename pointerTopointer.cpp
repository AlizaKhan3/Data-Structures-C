#include <iostream>

int main() {
    int a = 3;
    int* pa = &a;
    int** ppa = &pa;

    std::cout << "The address of pa is -->" << &pa << std::endl;
    std::cout << "The address of pa is -->" << ppa << std::endl;
    std::cout << "The value of address ppa is -->" << *ppa << std::endl;

    return 0;
}
