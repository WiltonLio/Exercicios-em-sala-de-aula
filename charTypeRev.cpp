#include <iostream>
#include <locale>
#include <wchar.h>
#include <cstdlib>


using namespace std;

int main(void)
{
    setlocale(LC_ALL, "pt_BR.utf-8");
    locale::global(locale("pt_BR.utf-8"));
    wcout.imbue(locale("pt_BR.utf-8"));
    wchar_t ch;
    cout << "Enter com um caractere: ";
    wcin >> ch;
    wcout << "O charactere: " << ch << "..." << (int)ch << endl;

    return 0;
}