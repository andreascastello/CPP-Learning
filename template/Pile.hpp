#pragma once

template<typename T> //est nécessaire a chaque fois
class Pile
{
private:
    T* data;
    int index;

public:
    Pile(int taille);

    void empile(T valeur);
};

template<typename T>
Pile<T>::Pile(int taille) : index(0) {
    data = new T [taille];
}

template<typename T> //on pourrait remplacer le T
void Pile<T>::empile(T valeur){
    data[index++] = valeur;
}

//On pourrait mettre les définitions dans la class Pile en inline ou même faire un autre fichier.