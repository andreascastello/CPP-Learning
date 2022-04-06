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

auto main() -> int {

	try {

		auto ptr = std::make_unique<Gateau>(); //pointeur automatique qui se detruit a la fin
			
		throw "Oups!";
	}
	catch (...) {
		std::cout << "erreur";
	}

	return 0;
}