#include "Pile.hpp"

int main()
{
    Pile<int> maPile(10); //Ici, je choisis dynamiquement quel type de donnée j'utilise ce qui me permet de ne pas avoir à faire une fonction pour les int une pour les doubles ...
    maPile.empile(42);
    
    return 0;
}
