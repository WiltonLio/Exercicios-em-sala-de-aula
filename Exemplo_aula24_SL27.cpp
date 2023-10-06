#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Aluno
{
private:
    string nome;
    int numeroIdentificacao;

public:
    Aluno(string _nome, int _numeroIdentificacao)
    {
        nome = _nome;
        numeroIdentificacao = _numeroIdentificacao;
    }
    string getNome()
    {
        return nome;
    }
    int getIdentificacao()
    {
        return numeroIdentificacao;
    }
    void exibirDetalhes()
    {
        cout << "Nome: " << nome << "Numero de identificacao: " << numeroIdentificacao << endl;
    }
};

class Turma
{
private:
    string nome;
    vector<Aluno *> alunos;

public:
    Turma(string _nome)
    {
        nome = _nome;
    }
    void adicionarAluno(Aluno *aluno)
    {
        alunos.push_back(aluno);
    }
    void listarAlunos()
    {
        cout << "Alunos da turma " << nome << ":" << endl;
        for (Aluno *a : alunos)
        {
            cout << a->getNome() << endl;
        }
    }
};

int main()
{
    Aluno a1("Joao", 1);
    Aluno a2("Maria", 2);
    Aluno a3("Pedro", 3);

    Turma t1("Turma 1");
    t1.adicionarAluno(&a1);
    t1.adicionarAluno(&a2);
    t1.adicionarAluno(&a3);

    t1.listarAlunos();

    return 0;
}
