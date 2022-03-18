#include "Dev.hpp"

auto main() -> int
{

    Personne *p = new Dev("Fabien");

    p->get_nom();

    Dev d("Fabien");
    d.get_nom();

    return 0;
}