#include "conta.hpp"
#include <iostream>

using std :: cout;
using std :: endl;
using std :: string;

int main()
{
    account novaconta;
    novaconta.setname("vitin");
    novaconta.setpassword("123");
    novaconta.setsaldo(21.22);

    string nome = "vitin";
    string senha = "122"; 
    double saldo = novaconta.getsaldo(nome, senha);

    cout << "o nome da conta é " << novaconta.getname(); 
    cout << " || a senha da conta é " << novaconta.getpassword();
    if(saldo != -1)
    cout << " || e o saldo é " << saldo << endl;
    else cout << endl << " ============= ERRO, ALGUM DOS SEUS DADOS ESTA INCORRETO ==========" << endl;

    return 0;
}