int global = 42; // statique -> accesible de tous (danger)

auto fonction () -> int {
    int local(42);

    int* dynamic = new int(42); // tas -> dynamique donc JE m'occupe de la memoire

        //exepetion ? -> fuite de mémoire
        
    delete dynamic;

    return local;
}//local

auto main () -> int {
    int local(42); // automatique -> pile donc le compilateur s'occupe des variables locales

    local = fonction();
    return 0;
}