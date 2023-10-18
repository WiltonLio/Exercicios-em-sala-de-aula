#include <iostream>

using namespace std;

class Desenhavel
{
public:
    virtual void desenhar() = 0;
};

class Quadrado : public Desenhavel
{
public:
    void desenhar() override
    {
        cout << "Desenhando um quadrado" << endl;
    }
};

class Circulo : public Desenhavel
{
public:
    void desenhar() override
    {
        cout << "Desenhando um circulo" << endl;
    }
};

class Triangulo : public Desenhavel
{
public:
    void desenhar() override
    {
        cout << "Desenhando um triangulo" << endl;
    }
};

int main()
{
    Quadrado quadrado;
    Circulo circulo;
    Triangulo triangulo;

    Desenhavel* _quadrado = &quadrado;
    Desenhavel* _circulo = &circulo;
    Desenhavel* _triangulo = &triangulo;

    _quadrado->desenhar();
    _circulo->desenhar();
    _triangulo->desenhar();

    return 0;
}