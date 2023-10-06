#include <iostream>
#include <string>

using namespace std;

class ItemBiblioteca
{
protected:
    string titulo;
    string autor;
    int numCopiasDisponiveis;

public:
    ItemBiblioteca(const string& titulo, const string& autor, int numCopiasDisponiveis)
        : titulo(titulo), autor(autor), numCopiasDisponiveis(numCopiasDisponiveis)
    {
    }
    string getTitulo() const
    {
        return titulo;
    }
    string getAutor() const
    {
        return autor;
    }
    int getNumCopiasDisponiveis() const
    {
        return numCopiasDisponiveis;
    }
};

class Livro : public ItemBiblioteca
{
private:
    int numPaginas;

public:
    Livro(const string& titulo, const string& autor, int numCopiasDisponiveis, int numPaginas)
        : ItemBiblioteca(titulo, autor, numCopiasDisponiveis), numPaginas(numPaginas)
    {
    }
    int getNumPaginas() const
    {
        return numPaginas;
    }
    ~Livro(){}
    void mostraLivroTela(Livro livro)
    {
        cout << "Livro: " << livro.getTitulo() << endl;
        cout << "Autor: " << livro.getAutor() << endl;
        cout << "Numero de paginas: " << livro.getNumPaginas() << endl;
        cout << "Numero de copias disponiveis: " << livro.getNumCopiasDisponiveis() << endl;
    }
};

class DVD : public ItemBiblioteca
{
private:
    int duracao;

public:
    DVD(const string& titulo, const string& autor, int numCopiasDisponiveis, int duracao)
        : ItemBiblioteca(titulo, autor, numCopiasDisponiveis), duracao(duracao)
    {
    }
    ~DVD(){}
    void mostraDVDTela(DVD dvd)
    {
        cout << "DVD: " << dvd.getTitulo() << endl;
        cout << "Autor: " << dvd.getAutor() << endl;
        cout << "Duracao: " << dvd.getDuracao() << endl;
        cout << "Numero de copias disponiveis: " << dvd.getNumCopiasDisponiveis() << endl;
    }
};

int main()
{
    Livro livro01("O Senhor dos Aneis", "J. R. R. Tolkien", 10, 1000);
    livro01.mostraLivroTela(livro01);

    return 0;
}