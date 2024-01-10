#include <iostream>
#include <vector>

using namespace std;

class ObjetoGeometrico
{
public:
    virtual double getArea();
    virtual double getPerimetro();
};

class Retangulo : public ObjetoGeometrico
{
private:
    double a;
    double b;

public:
    Retangulo(double a, double b)
};

int main(){
    ObjetoGeometrico* obj = new ObjetoGeometrico();
    double area, peri;
    area = obj->getArea();
    peri = obj->getPerimetro();
}