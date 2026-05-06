#pragma once
#include "conta.hpp"
#include <vector>
#include <string>

class bank
{
private:
    std :: string Nome_Banco; 
    std :: vector<account> clientes;
public:
//===========construtores==============//
    bank() = default;
    bank(const std:: string& nome_banco);

//======funçoes sobre logistica========//
    std::string getnome_banco() const;
    void cadastra_cliente(account& conta);
    bool saldo_suficiente(const std::string& nome, const double valor);
    bool transaction(const std::string& nome_que_manda, const std::string& nome_que_recebe,const double valor);   
    bool conta_existe(const std:: string& nome) const;
    void consultar_saldo(const std :: string& nome) const;
    void pega_historico(const std :: string& nome) const;
    void depositar(const std :: string& nome);
    void sacar(const std :: string& nome);
    
};