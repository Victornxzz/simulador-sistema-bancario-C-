#include "conta.hpp"
#include "banco.hpp"
#include "menu.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

using std :: cout;
using std :: endl;
using std :: string;

//pra rodar o codigo é: g++ main.cpp conta.cpp banco.cpp menu.cpp -o test


int main()
{
    bank Nubank("Nubank");
    menu Menu_Nubank(Nubank);
    return 0;
}