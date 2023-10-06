#include <iostream>

using namespace std;

class Forma
{
public:
    virtual double calcularArea() const = 0;
};

class Retangulo : public Forma
{
private:
    double largura;
    double altura;

public:
    Retangulo(double largura, double altura): largura(largura), altura(altura)
    {
    }

    double calcularArea() const override
    {
        return largura * altura;
    }
};

class Circulo : public Forma
{
private:
    double raio;

public:
    Circulo(double raio)
        : raio(raio)
    {
    }

    double calcularArea() const override
    {
        return 3.14159 * raio * raio;
    }
};

int main()
{
    double largura, altura, raio;

    cout << "Digite a largura do retangulo: ";
    cin >> largura;

    cout << "Digite a altura do retangulo: ";
    cin >> altura;

    cout << "Digite o raio do circulo: ";
    cin >> raio;

    Retangulo retangulo(largura, altura);
    Circulo circulo(raio);

    cout << "Area do retangulo: " << retangulo.calcularArea() << std::endl;
    cout << "Area do circulo: " << circulo.calcularArea() << std::endl;

    return 0;
}