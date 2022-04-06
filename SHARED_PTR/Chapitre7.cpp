#include <iostream>
#include <memory>


struct Gateau {
	Gateau() {
		std::cout << "ctor" << std::endl;
	}
	~Gateau() {
		std::cout << "dtor" << std::endl;
	}
};

struct Personne {

	std::shared_ptr<Gateau> le_mien;

	auto donneGateau(std::shared_ptr<Gateau> gat) {
		le_mien = gat;
	}
};

auto main() -> int {

	try {

		auto ptr = std::make_shared<Gateau>(); // pointeur qui peut partager son espace mémoire a plusieur personne, on peut compter le nombre d'utilisation
		
		std::cout << " ref = " << ptr.use_count() << std::endl; // 1

		{
			Personne fabien;
			fabien.donneGateau(ptr);
			std::cout << " ref = " << ptr.use_count() << std::endl;// 2
		}
		
		std::cout << " ref = " << ptr.use_count() << std::endl;// 1
		//une fois arriver a 0, il se detruits
		

	}
	catch (...) {
		std::cout << "erreur";
	}

	return 0;
}