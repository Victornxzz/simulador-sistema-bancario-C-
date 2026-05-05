#pragma once
#include "conta.hpp"
#include <vector>
#include <string>

class bank
{
private:
    std :: vector<account> clientes;
public:
//===========construtores==============//
    bank() = default;
    bank(account& conta);

//======funçoes sobre logistica========//
    void cadastra_cliente(account& conta);
    bool saldo_suficiente(const std::string& nome, const double valor);
    bool transaction(const std::string& nome_que_manda, const std::string& nome_que_recebe,const double valor);   
    bool conta_existe(const std:: string& nome) const;
    void consultar_saldo(const std :: string& nome) const;
};