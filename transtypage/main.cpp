auto main () -> int {

    double dd = 1.0;
    //loat df = (float)dd;
    // ou
    float df = static_cast<float>(dd);


    //pour les const
    const double* dp = new double(1.0);
    double* pd = const_cast<double*>(dp); //ici, "const_cast<double*>" est utile pour le lecteur, on "dé-const", on force le cast

    //dynamic_cast      permet une recherche dynamique du type
    //reinterpret_cast  permet de réinterpréter la mémoire
    return 0;
}