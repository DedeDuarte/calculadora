#include <iostream>
#include <string>
#include <limits>


// TODO: Infixo -> Posfixo
// IDEIA: Colocar cada valor em uma struct, e fazer um array de structs para o posfixo
class operands {
private:
    std::string data;
    int value;

public:
    // TODO: Terminar de codar o contrutor
    operands (std::string data) {
        this->data = data;

        if (isOperation()) std::cout << "Eh operacao!" << std::endl;
        else std::cout << "Nao eh operacao :(" << std::endl;
    }

    // TODO: Getter da operação

    bool isOperation() {
        return data.size() == 1 && std::string("+-*/^").find(data[0]) != std::string::npos;
    }
};

int main() {
    std::cout << "Digite uma expressao matematica: ";
    std::string input;
    std::getline(std::cin, input);

    operands teste(input);

    return 0;

    // TODO: Calculadora Posfixa
    // TODO: Interface
}