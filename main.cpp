#include "conta.hpp"
#include "banco.hpp"
#include <iostream>

using std :: cout;
using std :: endl;
using std :: string;

int main()
{
    account novaconta;
    novaconta.setname("vitin");
    novaconta.setpassword("123");
    
    account novaconta2;
    novaconta2.setname("camila");
    novaconta2.setpassword("700");
    
    bank nubank;
    nubank.cadastra_cliente(novaconta);
    nubank.cadastra_cliente(novaconta2);
    nubank.transation(novaconta, novaconta2, 50);

    account teste;
    cout << novaconta.getsaldo("vitin") << endl;
    cout << novaconta2.getsaldo("camila") << endl;
    cout << nubank.conta_existe(novaconta) << endl;

    return 0;
}