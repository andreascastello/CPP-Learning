#include "Dev.hpp"

auto main() -> int
{

    Personne *p = new Dev();

    p->get_nom();

    Dev d;
    d.get_nom();

    return 0;
}