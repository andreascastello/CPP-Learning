#pragma once
#include <string>

class Case; //declaration anticipee, on evite de mettre des includes dans les .h

class Pion
{
    Case *position;
    std::string nom;

public:
    auto get_nom() -> std::string
    {
        return nom;
    }
};