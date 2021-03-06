#pragma once

#include <iostream>
#include <string>
#include "Personne.hpp"

class Developpeur : public Personne {

	std::string langage;

public:

	Developpeur(std::string nom, std::string langage) : Personne(nom), langage(langage) {}

	/*virtual*/ auto affiche() -> void override {
		Personne::affiche();
		std::cout  << ", Langage "<< langage << std::endl;
	}
	~Developpeur()
	{
		std::cout << " dtor developpeur" << std::endl;
	}

	auto fct() -> void{
		std::cout << "C+++++++++" << std::endl;
	}
};