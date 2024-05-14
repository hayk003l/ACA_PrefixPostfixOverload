#include <iostream>

#include "A_Class.hpp"

int main() {
    A obj(5);

    std::cout << "Num before operations = " << obj.getNum() << std::endl;

    std::cout << "Prefix = " << ++obj << std::endl;
    std::cout << "Postfix = " << obj++ << std::endl;
    std::cout << "Num after operations = " << obj.getNum() << std::endl;

    std::cout << std::endl;
    A ob(5);
    
    std::cout << "Num before operations = " << ob.getNum() << std::endl;

    std::cout << "Prefix = " << --ob << std::endl;
    std::cout << "Postfix = " << ob-- << std::endl;
    std::cout << "Num after operations = " << ob.getNum() << std::endl;

    return 0;

}
