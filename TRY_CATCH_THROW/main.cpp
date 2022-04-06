#include <iostream>

class Pile
{
private:
    int* data;
    int index;
    int taille;

public:

    Pile(int taille) : index(0), taille(taille)
    {
        data = new int[taille];
    }

    ~Pile()
    {
        delete[] data;
    }

    void push (int value)
    {
        if(index > taille ) throw "Erreur pile debordee"; // throw design l'exeption, il peut prendre n'importe quel objet en param, ici, un const char*
        data[index++] = value;
    }
};

auto main() -> int {
    Pile pi { 3 };
    try
    {
        for (int i = 0; i < 10; i++) pi.push(i);
    }
    catch(const char* ex) //le type doit etre le meme que le throw
    {
        std::cout << " Erreur " << ex << std::endl;
    }

    return 0;
}