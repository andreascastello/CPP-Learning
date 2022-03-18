#include <string>

class Voiture {
    private:
        std::string imatriculation { "default" }; //par default est private
        int vitesse { 0 };

    public:
        auto demarrer() -> void;

};