#include "banco.hpp"
#include "conta.hpp"
#include <iostream>
#include <string>

void bank::cadastra_cliente(const account& conta)
{
    this->clientes.push_back(conta);
}

void bank::transation(account& conta_que_manda, account& conta_que_recebe, double valor)
{
    if(conta_que_manda.getsaldo(conta_que_manda.getname()) >= valor)
    {
    conta_que_manda.saque(valor);
    conta_que_recebe.deposito(valor);
    } else std :: cout << "TRANSATION IMPOSSIVEL DEVIDO SALDO INSUFICIENTE DE " << conta_que_manda.getname() << std :: endl;
}

bool bank::conta_existe(const account& conta) const
{
    bool existe = false;
    for(auto a : this->clientes)
    {
        if(a.getname() == conta.getname())
        existe = true;
    }
    return existe;
}