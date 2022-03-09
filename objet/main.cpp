#include "voiture.hpp"

int main(int argc, char const *argv[])
{
    Voiture titine{"xxx", 10};      //automatique
    titine.demarrer();

    Voiture &mercedes = titine;
    mercedes.demarrer();

    Voiture *ptr = &titine;
    ptr->demarrer();                //si pointeur, alors utiliser "->"

    Voiture *ptrNew = new Voiture;  //dynamique
    ptrNew->demarrer();
    (*ptrNew).demarrer();

    return 0;
}
