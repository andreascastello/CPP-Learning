#include <string>

struct Ecran {
    int largeur;
    int hauteur;

    mutable int curseur;    //mutable permet d'autoriser la modification dans les fonctions const
    auto afficher (std::string msg) const -> void {
        ///
        curseur += msg.length();    //work
        //hauteur = 56;             //don't work
    }
};

auto main() -> int {
    Ecran ecr;
    ecr.afficher("hello");
    return 0;
}