#include <iostream>
#include <string>
#include <limits>

int main() {
    std::cout << "Digite uma expressao matematica: ";
    std::string input;
    
    std::getline(std::cin, input);

    std::cout << input << std::endl;

    return 0;
}