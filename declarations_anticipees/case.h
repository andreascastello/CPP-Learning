#pragma once
#include <string>

class Pion; //declaration anticipee, on evite de mettre des includes dans les .h

class Case
{
    Case *suivante;
    std::string nom;

public:
    auto action(Pion* arrivant) -> void;
};