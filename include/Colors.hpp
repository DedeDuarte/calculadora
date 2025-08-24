#ifndef COLORS_HPP
#define COLORS_HPP

#include <string>

class Colors {
public:
    static std::string red();
    static std::string cyan();
    static std::string reset();

    static std::string RGB(int R, int G, int B);
};

#endif