#include <iostream>

using namespace std;

int main(void)
{
    unsigned short int genInt;
    unsigned char gen;
    cout << "Qual a informação genetica da planta: " << endl;
    //cin >> gen;
    cin >> genInt;
    gen = genInt;
    //perguntando pelo gen 0
    //bool gen0 = (gen & 1) ? true : false;
    //bool gen0 = (gen & 0b1);
    unsigned char genTest = 0b1;
    bool gen0 = (gen & genTest);
    cout << gen0 << endl;
    //genTest *= 2;
    genTest = genTest << 1;
    bool gen1 = (gen & genTest);
    cout << gen1 << endl;

    genTest = genTest << 1;
    bool gen2 = (gen & genTest);
    cout << gen2 << endl;
    
    genTest = genTest << 1;
    bool gen3 = (gen & genTest);
    cout << gen3 << endl;
    
    genTest = genTest << 1;
    bool gen4 = (gen & genTest);
    cout << gen4 << endl;
    
    genTest = genTest << 1;
    bool gen5 = (gen & genTest);
    cout << gen5 << endl;

    return 0;
}