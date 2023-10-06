#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    vector[int] vec {0, 1, 2, 3, 5, 8, 13, 21};
    for (auto it = vec.begin();
              it != vector.end(); it++)
              
    {
        cout << *it << endl;
    }
    
}
Explicação:

Adicionei as declarações #include necessárias para iostream e vector.
Alterei vector[int] para std::vector<int>.
Removi o iterador e usei um loop baseado em intervalo.
Substituí cout por std::cout e endl por std::endl.
Adicionei return 0; no final da função main para completude.
/*
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec{0, 1, 2, 3, 5, 8, 13, 21};
    
    for (const auto& value : vec)
    {
        std::cout << value << std::endl;
    }
    
    return 0;
}
*/