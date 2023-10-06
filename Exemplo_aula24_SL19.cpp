#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Estado
{
private:
    string nome, sigla;
    vector<Cidade> cidades;

public:
    Estado(string _nome, string _sigla)
    {
        nome = _nome;
        sigla = _sigla;
    }
    void addCidade(Cidade cidade)
    {
        cidades.push_back(cidade);
    }
};

class Cidade
{
private:
    string nome;
public:
    Cidade(string _nome)
    {
        nome = _nome;
    }
};

int main()
{
    vector<Estado> estados;
    cout << "Digite o nome do estado: ";
    cin >> estados;
    cout << "Digite o nome da cidade: ";
    cin >> cidade;

    return 0;
}

/*class Estado
{
    private:
        string nome;
        string sigla;
    public:
        Estado(string nome, string sigla) : nome(nome), sigla(sigla)
        {
        }

};

class Cidade

{
    private:
        string nome;
        string estado;
    public:
        Cidade(string nome, string estado) : nome(nome), estado(estado)
        {
        }
};

int main()
{
    vector<Estado> estados;
    cout << "Digite o nome do estado: ";
    cin >> estados;
    cout << "Digite o nome da cidade: ";
    cin >> cidade;

    return 0;
}
*/