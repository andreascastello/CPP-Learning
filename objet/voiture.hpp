#include <string>

struct Voiture {
        std::string imatriculation { "default" }; //par default est private
        int vitesse { 0 };

    public:
        auto demarrer() -> void;

};