#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
    string nome;
    int idade;

public:
    Animal(const std::string &nome, int idade)
        : nome(nome), idade(idade)
    {
    }

    virtual void fazerSom() const = 0;
};

class Cachorro : public Animal
{
public:
    Cachorro(const string &nome, int idade): Animal(nome, idade)
    {
    }

    void fazerSom() const override
    {
        cout << "Au Au!" << std::endl;
    }
};

class cachorrinho : public Cachorro
{
public:
    cachorrinho(const string &nome, int idade): Cachorro(nome, idade)
    {
    }

    void fazerSom() const override
    {
        cout << "baixinho" << endl;
    }
};

int main()
{
    Animal *animal = new Cachorro("Ringo", 3);
    animal->fazerSom();
    cachorrinho cachorro("Jagunço", 6);
    cachorro.fazerSom();

    delete animal;

    return 0;
}

/*Neste código, a classe Animal é a superclasse e a classe Cachorro é a subclasse que herda de Animal.
O método fazerSom() é definido como um método virtual puro na classe Animal e é implementado na classe Cachorro
para imprimir "Au Au!" quando chamado.

No main(), o objeto Cachorro chamado cachorro e chamo o método fazerSom().
O ponteiro Animal* que aponta para um objeto Cachorro, o método fazerSom() através desse 
ponteiro. No final, o ponteiro é deletado para liberar a memória alocada.

A palavra-chave "const" indica que a função não modifica o objeto em que está sendo chamada.
A palavra-chave "override" indica que essa função está substituindo uma função virtual em uma classe base.*/