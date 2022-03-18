#pragma once

#include <iostream>
#include <string>

class Personne {

	std::string nom;

public :

	Personne(std::string nom) : nom(nom) {}

	virtual auto affiche() -> void {
		std::cout << " Nom : " << nom ;
	}

	virtual ~Personne() {
		std::cout << " dtor personne" << std::endl;
	}

	//rendre abstrait une classe
	virtual auto fct() -> void = 0;
};