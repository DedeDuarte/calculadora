#ifndef COLORS_HPP
#define COLORS_HPP

#include <string>

class Colors {
public:
    static std::string red();
    static std::string darkRed();

    static std::string cyan();
    static std::string darkCyan();

    static std::string yellow();
    static std::string darkYellow();

    static std::string reset();

    static std::string RGB(int R, int G, int B);
};

#endif