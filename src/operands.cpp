#include <iostream>
#include <algorithm>

class operands {
private:
    std::string data;

public:
    operands (std::string data) {
        std::transform(data.begin(), data.end(), data.begin(),
                       [](unsigned char c) { return std::tolower(c); });

        this->data = data;

        if(!isNumber() && !isVariable() && !isOperation())
            throw std::runtime_error("ERROR: Operands data invalid!");
        
        // DEBUG:
            // if (isNumber()) std::cout << "Eh numero!" << std::endl;
            // if (isVariable()) std::cout << "Eh variavel!" << std::endl;
            // if (isOperation()) std::cout << "Eh Operacao!" << std::endl;
    }

    std::string getData() const {
        return data;
    }

    bool isNumber() const {
        return !data.empty() && std::all_of(data.begin(), data.end(), ::isdigit);
    }

    bool isParentheses() const {
        std::string parentheses = ("()");
        return data.size() == 1 && parentheses.find(data[0]) != std::string::npos;
    }

    bool isVariable() const {
        std::string alphabet = ("abcdefghijklmnopqrstuvwxyz");
        return data.size() == 1 && alphabet.find(data[0]) != std::string::npos;
    }

    bool isOperation() const {
        std::string operators = ("+-*/^");
        return data.size() == 1 && operators.find(data[0]) != std::string::npos;
    }
};