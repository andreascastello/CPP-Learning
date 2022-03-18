
#include "Developpeur.hpp"

auto main() -> int {

	Developpeur d{ "Fabien", "C++" };
	
	Personne& pd = d;

	pd.affiche();

	//d.affiche();

	return 0;
}