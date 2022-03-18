#pragma once
#include <string>

class Personne
{
    std::string nom;

public:

    Personne(std::string nom) : nom(nom) {} // dans ce constructeur, on prevoit d'attribuer le nom sans pour autant qu'il ne soit pas private

    auto get_nom() -> std::string
    {
        return nom;
    }
};