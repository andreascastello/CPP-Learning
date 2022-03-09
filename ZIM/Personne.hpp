#include <string>

class Personne
{
    std::string nom;

    public:
        Personne(std::string nom)
            :nom(nom)   //zone d'initialisation des membres : ZIM
            /*
                le premier "nom" correspond à this->nom
                le second "nom" correspond à la variable "nom" en paramètre

                "this->nom = nom;" est une affectation
                alors que
                ":nom(nom)" est une initialisation

                ZIM permet l'initialisation des constantes et des références
                ZIM est plus performant
            */
        {
            //le constructeur est vide
        }
};
