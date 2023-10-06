#include <iostream>
#include <string>

using namespace std;

int iGlobal = 5;

void testeLocal(float iParam)
{
    //cout << iGlobal << " " << iLocal << endl;
    cout << iGlobal << endl;
    cout << " Dentro da função testeLocal " << iParam << endl;
    iParam = 0;
    cout << " Dentro da função testeLocal " << iParam << endl;
    float ilocal;
    int iGlobal;
}

int main() 
{
    float ilocal = 3.14;
    cout << iGlobal << " " << ilocal << endl;
    iGlobal++;
    testeLocal(ilocal);
    cout << iGlobal << " " << ilocal << endl;
    return 0;

}