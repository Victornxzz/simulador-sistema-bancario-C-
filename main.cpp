#include "conta.hpp"
#include "banco.hpp"
#include "menu.hpp"
#include <iostream>
#include <cstdlib>
#include <string>

using std :: cout;
using std :: endl;
using std :: string;

int main()
{
    bank Nubank("Nubank");
    menu Menu_Nubank(Nubank);
    return 0;
}