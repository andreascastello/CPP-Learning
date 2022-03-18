#pragma once

#include "Personne.hpp"
#include <iostream>

class Dev : public Personne
/*
*
    l'heritage se fait grace à ":"

    par defaut, l'heritage est private donc ne pas oublier le public avant
    l'heritage peut etre aussi private ou protected pour des heritages "d'implementation"
*
*/
{
public:
    auto afficher() -> void
    {
        std::cout << "Nom : " << get_nom() << std::endl;
    }
};