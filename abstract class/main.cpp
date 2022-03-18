
#include "Developpeur.hpp"

auto main() -> int {

	Developpeur marc { "marc", "c++"};

	//Personne titi {"Titi"};	//n'est plus possible
	Personne* ptr = &marc;		//est encore possible

	return 0;
}