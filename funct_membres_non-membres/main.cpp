struct Type
{
    auto fonction () -> void;       //déclaration d'une fonction membre
};

auto Type::fonction() -> void {
                                    //définition d'une fonction membre
}

auto fonction() -> void;            //déclaration d'une fonction non-membre

auto fonction() -> void{
                                    //définition d'une fonction non-membre
}

int main()
{
    fonction();

    Type dd;
    dd.fonction();

    return 0;
}
