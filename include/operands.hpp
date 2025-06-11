#ifndef Operands_hpp
#define Operands_hpp

#include <iostream>
#include <algorithm>

class operands {
private:
    std::string data;

public:
    operands (std::string data) ;
    std::string getData() const ;
    bool isNumber() const ;
    bool isParentheses() const ;
    bool isVariable() const ;
    bool isOperation() const ;
};

#endif