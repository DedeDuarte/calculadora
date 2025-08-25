#include "Colors.hpp"

#include <string>
#include <sstream>

std::string Colors::red() { return "\033[38;2;255;000;000m"; }
std::string Colors::darkRed() { return "\033[1;38;2;150;000;000m"; }

std::string Colors::cyan() { return "\033[38;2;000;255;255m"; }
std::string Colors::darkCyan() { return "\033[1;38;2;000;150;150m"; }

std::string Colors::yellow() { return "\033[38;2;255;255;0m"; }
std::string Colors::darkYellow() { return "\033[1;38;2;150;150;0m"; }

std::string Colors::reset() { return "\033[0m"; }

std::string Colors::RGB(int R, int G, int B) {
    std::ostringstream sb;
    sb << "\033[38;2;" << R << ";" << G << ";" << B << "m";

    return sb.str();
}