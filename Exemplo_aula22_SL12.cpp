#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

class BancoDeDados
{
private:
    string nome_arquivo;

public:
    static void salvarDados(vector<string> dados)
    {
        ofstream arquivo_saida;
        arquivo_saida.open("exemplo2.txt", ios_base::out);

        if (arquivo_saida.is_open())
        {
            for (int i = 0; i < dados.size(); i++)
            {
                arquivo_saida << dados[i] << endl;
            }
            arquivo_saida.close();
        }
        else
        {
            cout << "Erro ao abrir o arquivo" << endl;
        }
    }
    static vector<string> recuperarDados()
    {
        vector<string> dados;
        ifstream arquivo_entrada;
        arquivo_entrada.open("exemplo2.txt", ios_base::in);

        if (arquivo_entrada.is_open())
        {
            string linha;
            while (getline(arquivo_entrada, linha))
            {
                dados.push_back(linha);
            }
            arquivo_entrada.close();
        }
        else
        {
            cout << "Erro ao abrir o arquivo" << endl;
        }
        return dados;
    }
};

int main()
{
    vector<string> dados = ("teste1", "teste2", "teste3");
    BancoDeDados::salvarDados(dados);
    /*ifstream arquivo_entrada;
    arquivo_entrada.open("exemplo.txt", ios_base::in);

    if (arquivo_entrada.is_open())
    {
        string linha;
        while (getline(arquivo_entrada, linha))
        {
            cout << linha << endl;
        }
        arquivo_entrada.close();
    }
    else
    {
        cout << "Erro ao abrir o arquivo" << endl;
    }

    ofstream arquivo_saida;

    arquivo_saida.open("exemplo.txt", ios_base::out);

    if (arquivo_saida.is_open())
    {
        arquivo_saida << "Escrevendo no arquivo" << endl;
        arquivo_saida << 20 + 30 << endl;
        arquivo_saida.close();
    }
    else
    {
        cout << "Erro ao abrir o arquivo" << endl;
    }*/

    return 0;
}