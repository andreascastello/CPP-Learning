#include <array>

//le tableau C++ ne connais pas sa taille, c'est juste un pointeur
auto fonction(int* tab, int taille) -> int {
    int retval(0);

    for (int i = 0; i < taille; i++)
    {
        retval += tab[i];
    }

    return retval;
}
auto main() -> int {
    int var(42);

    int tab[6];
    tab[0] = 42;
    *(tab) = 42; //same (arithmétique de pointeur)

    tab[5] = 42;
    *(tab+5) = 42; //same mais très déconseillé

    //on veut retourner la somme des valeurs du tableau (methode longue et ancienne, ici, n'utilise pas le <array>)
    int somme = fonction(tab, 6);

    //pour éviter la confusion entre le tableau d'entier et le pointeur d'entier
    std::array<int, 6>arr;
    int taille = arr.size();
    //DONC ON UTILISE CA POUR LES TABLEAUX, C'EST BIEN PLUS SIMPLE
    
    return 0;
}