#include <iostream>
#include <string>

int main()
{
    std::string nome1("fulano");
    std::string nome2("beltrano");
    std::string nome3, nome4;
    std::cout << "Os dois primeiros nomes são " << nome1 << "e" << nome2 << std::endl;
    nome3 = "ciclano";
    nome4 = nome3; 
    std::cout << "O terceiro e quarto nomes são " << nome3 << "e" << nome4 << std::endl;
    return 0;
}

