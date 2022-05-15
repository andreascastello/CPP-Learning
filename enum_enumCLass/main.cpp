//enum Jour { LUNDI, MARDI, MERCREDI, JEUDI, VENDREDI, SAMEDI, DIMANCHE };
enum class Jour { LUNDI, MARDI, MERCREDI, JEUDI, VENDREDI, SAMEDI, DIMANCHE }; //enum class est bien moins permissif et donc plus sécurisé

void funct(int i){
    ++i;
}

void funct2(int& i){
    ++i;
}

void funct3(const int& i){

}

auto main () -> int {

    Jour j = Jour::LUNDI;
    float k(4.4);
    int i {k};


    //int tt = j; //marche avec enum mais pas avec enum class
}