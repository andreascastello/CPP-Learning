
#include "Voiture.hpp"

auto creer() -> Voiture {
	Voiture locale;

	// faire ce qu'il faut avec la voiture

	return locale;
}

auto main() -> int {

	Voiture v1;

	// constructeur de copie
	Voiture v2(v1); // Voiture v2 = v1

	// op�rateur d'affectation
	v2 = v1;

	Voiture v3 = creer();

}





































auto acheter(Voiture v) {
	// blah
}

