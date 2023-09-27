#include <iostream>
#include <string>

using namespace std;

class Carro
{
    private:
    string tipo;
    string cor;
    string placa;
    int numPortas;

public:
Carro(
    string _placa,
    string _tipo="indefinido",
    string _cor="indefinido",
    int _numPortas=2
)
{
    tipo = _tipo;
    cor = _cor;
    placa = _placa;
    numPortas = _numPortas;
}

Carro(
    {
        tipo = "indefinido",
        cor = "indefinido",
        placa = "indefinido",
        numPortas = 2
    }
)

void acelerar(float _velocidade)
    {
        cout << "Acelerando para " << _velocidade << " km/h" << endl;
    }

void frear()
    {
        cout << "Freando" << endl;
    }
};

int main(void)
{
    Carro civic;

    civic.settipo = "Sedan";
    cout << civic.tipo << endl;

    civic.acelerar(200);
    civic.frear();
}