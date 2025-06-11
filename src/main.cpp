#include "Operands.cpp"

#include <iostream>
#include <string>

int main() {
    std::cout << "Digite uma expressao matematica: ";
    std::string input;
    std::getline(std::cin, input);

    operands teste(input);
    std::cout << teste.getData();

    return 0;
}