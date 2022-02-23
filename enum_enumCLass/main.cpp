//enum Jour { LUNDI, MARDI, MERCREDI, JEUDI, VENDREDI, SAMEDI, DIMANCHE };
enum class Jour { LUNDI, MARDI, MERCREDI, JEUDI, VENDREDI, SAMEDI, DIMANCHE }; //enum class est bien moins permissif et donc plus sécurisé 
auto main () -> int {

    Jour j = Jour::LUNDI;

    //int tt = j; //marche avec enum mais pas avec enum class
}