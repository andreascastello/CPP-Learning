#include <iostream>
#include <list>

auto main () -> int {

    int tab[] = {2,6,4,4,98,45,5,234,254,8};

    std::list<int> liste;

    // for (auto i(0); i < 10; i++)
    // {
    //     std::cout << "indice : " << tab[i] << std::endl;
    // }
    
    //l'utilisation de for-range facilite la lisibilité.
    for (auto v: tab)//ici, on pourrait utiliser la liste et ça fonctionnerait
    {
        std::cout << "valeur : " << v << std::endl;
    }
    
    
    return 0;
}