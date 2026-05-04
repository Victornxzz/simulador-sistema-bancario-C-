#pragma once
#include "conta.hpp"
#include <vector>
#include <string>

class bank
{
private:
    std :: vector<account> clientes;
public: 
    void cadastra_cliente(const account& conta);
    void transation(account& conta_que_manda, account& conta_que_recebe, double valor);   
    bool conta_existe(const account& conta) const;
};