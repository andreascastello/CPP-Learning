#include <iostream>

auto main() -> int {
    char w = 65; //'A'
    //8 bit

    signed char ws = -42;   // de -127 a 128
    unsigned char wu = 42;  // de 0 à 256

    short int si = 42;
    //16 bit

    int i = 42;
    //32 bit

    long int li = 42L;  //il est possible de spécifier le "L" à la fin pour être bien sur d'utiliser un long
    //64 bit

    long long int lli = 42;
    //128 bit

    //on peut également signé ou non-signé les i, li, lli;


    //le float nous permet d'utiliser des nombres décimaux;
    float ff = 1.0f;    //on précise "f"ou "F" à la fin pour forcer l'utilisation du float (sinon elle est considérée comme un double)
    //32 bit

    double df = 1.0;    //pour les valeurs plus large
    //64 bit

    //df = ff;          //cette conversion ne fera pas de warning car on ne peut pas perdre de données
    //ff = df;          //selon le compilateur, il est possible d'avoir un warning car c'est une conversion implicite représentant un potentiel risque de perte de données.

    long double ldf = 1.0; //pour les valeurs encore plus large mais pas vraiment au norme
    //80bit

    double dd = 1e4; // 1x10 puissance 4

    bool booleen = true; // autre que 0
    booleen = false; // 0
    booleen = 5;
    //std::cout << std::boolalpha << booleen; //boolalpha permet de traduire de le booleen (true/false)

    wchar_t wl = 'A'; //unicode
    //16 bit

    char16_t w16; //utf16
    char32_t w32; //utf32
    return 0;
}