#include "banco.hpp"
#include "conta.hpp"
#include <iostream>
#include <string>

bank::bank(account& conta)
{
    cadastra_cliente(conta);
}

void bank::cadastra_cliente(account& conta)
{
    this->clientes.push_back(conta);
}

bool bank::saldo_suficiente(const std::string& nome, const double valor)
{
    bool temsaldo = false;
    for(const auto a : this->clientes)
    {
        if(a.getname() == nome)
        if(a.getsaldo(nome) >= valor)
        temsaldo = true;
    }
    return temsaldo;
}

bool bank::transaction(const std :: string& nome_que_manda, const std :: string& nome_que_recebe,const double valor)
{
    bool transaction_ocorreu;
    if(saldo_suficiente(nome_que_manda, valor))
    for(auto &a : this->clientes)
    {
        if(a.getname() == nome_que_manda)
        a.saque(valor);
        if(a.getname() == nome_que_recebe)
        a.deposito(valor);
    }
    return transaction_ocorreu;
}

bool bank::conta_existe(const std:: string& nome) const
{
    bool existe = false;
    for(auto a : this->clientes)
    {
        if(a.getname() == nome)
        existe = true;
    }
    return existe;
}

void bank::consultar_saldo(const std :: string& nome) const
{
    bool achou = true;
    for(const auto a : this->clientes)
    {
        if(a.getname() == nome){
            std::cout << "O saldo do " << nome << " é de : R$" << a.getsaldo(nome) << std::endl;
        }
    }
    if(!achou)
    std::cout << "ERRO : O INDIVIDUO BUSCADO NAO ESTA CADASTRADO NO BANCO" << std::endl;
}