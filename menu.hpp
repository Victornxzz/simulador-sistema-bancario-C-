#pragma once
#include "banco.hpp"
#include "conta.hpp"


class menu
{
private:
    bank Banco;
public:
//===========COFATORES======================//
    menu(bank& banco);
//===========FUNÇOES DE LOGISTICA===========//
    
    void menu_inicial_opcao();
    void menu_consulta_opcao();
    void menu_DepSaq_opcao();

//==========FUNÇOES DE INTERFACE================//
    void menu_inicial();
    void menu_cadastro();
    void menu_transaction();
    void menu_consulta();
    void menu_DepSaq();
};