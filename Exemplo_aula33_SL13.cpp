#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Lista
{
private:
    vector<T> dados;

public:
    void adicionar(const T &dado)
    {
        dados.push_back(dado);
    }

    void remover(const T &dado)
    {
        for (auto it = dados.begin(); it != dados.end(); ++it)
        {
            if (*it == dado)
            {
                dados.erase(it);
                break;
            }
        }
    }

    void listar()
    {
        for (const auto &dado : dados)
        {
            cout << dado << endl;
        }
    }
};

int main()
{
    
    Lista<int> listaInt;
    listaInt.adicionar(5);
    listaInt.adicionar(10);
    listaInt.adicionar(15);
    listaInt.remover(10);
    listaInt.listar();

    Lista<string> listaString;
    listaString.adicionar("Teste");
    listaString.adicionar("Teste2");
    listaString.remover("Teste");
    listaString.listar();

    Lista<float> listaFloat;
    listaFloat.adicionar(3.14);
    listaFloat.adicionar(2.718);
    listaFloat.remover(3.14);
    listaFloat.listar();
    

    return 0;
}