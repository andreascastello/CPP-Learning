#include <string>

class Personne
{
    std::string nom;
    std::string prenom;

    public:
        //creation d'un constructeur
        Personne(std::string nom){
            this->nom = nom;
        }

        //ici, on factorise la surcharge du second constructeur en appellant le corps du premier
        Personne(std::string nom, std::string prenom) :Personne(nom) {
            /*
                ici, on évite d'écrire cette ligne :
                this->nom = nom;
            */
            this->prenom = prenom;
        }
};
