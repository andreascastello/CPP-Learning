#include "swap.hpp"
auto swap (int a, int b) -> void {
    int tmp = a;
    a = b;
    b = tmp;
}