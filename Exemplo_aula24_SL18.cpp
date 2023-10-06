#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Estado
{
private:
    string nome;
    string sigla;

public:
    Estado(string nome, string sigla)
    {
        this->nome = nome;
        this->sigla = sigla;
    }
    string getNome()
    {
        return nome;
    }
    string getSigla()
    {
        return sigla;
    }
};

class Cidade
{
private:
    string nome;
    Estado *estado;

public:
    Cidade(Estado t, string nome)
    {
        estado = &t;
        this->nome = nome;
    }
    void setEstado(Estado t)
    {
        
    }
};

int main()
{

    return 0;
}
