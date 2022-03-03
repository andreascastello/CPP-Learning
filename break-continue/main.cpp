auto main() -> int
{

    int tab[10][10];
    bool sortie = false;

    for (auto i(0); i < 10 && sortie == false; i++)
    {
        if (i == 5)
            continue;//si i == 5 alors, on skip la valeur

        for (auto j(0); j < 10; j++)
        {
            tab[i][j] = i * j;

            if (j == 5)
            {
                sortie = true;
                break;//si j == 5 on stop cette boucle
            }
        }
    }
    return 0;
}