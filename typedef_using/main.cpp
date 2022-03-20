#include <string>
#include <complex>

template <typename T>
class Pile
{
};

typedef Pile<std::complex<int>> PC;
using PS = Pile<std::string>; // on simplifie "Pile<std::string>" par PS

auto main() -> int
{
    Pile<int> pi;
    Pile<double> pd;

    PS ps;
    PC pc;
    return 0;
}