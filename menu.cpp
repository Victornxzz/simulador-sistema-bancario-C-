#include "menu.hpp"
#include "banco.hpp"
#include "conta.hpp"
#include <iostream>
#include <cstdlib>
#include <string>
#include <thread> 
#include <chrono>  

using std :: cout;
using std :: cin;
using std :: endl;

//pra rodar o codigo é: g++ main.cpp conta.cpp banco.cpp menu.cpp -o test

void sleep()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
}

menu::menu(bank& banco)
{
    this->Banco = banco;
    menu_inicial();
}

void menu::menu_inicial()
{
    system("clear");

    cout << "<============= MENU DO BANCO " << this->Banco.getnome_banco() << " =================>" << endl;
    cout << endl << endl;
    cout << "Digite 1 : Cadastro"  << endl;
    cout << "Digite 2 : Transacao" << endl;
    cout << "Digite 3 : Consulta"  << endl;
    cout << "Digite 4 : Deposito ou Saque" << endl;
    menu_inicial_opcao();
}

void menu::menu_cadastro()
{
    std :: string nome_novoCliente;
    std :: string senha_novoCliente;
    account conta;

    cout << "<=======================================================================================>" << endl;
    cout << "<============================ MENU DE CADASTRAMENTO ====================================>" << endl;
    cout << endl;
    cout << "Escreva o seu Nome: ";
    cin >> nome_novoCliente;
    conta.setname(nome_novoCliente);
    cout << "Escreva sua senha: ";
    cin >> senha_novoCliente;
    conta.setname(senha_novoCliente);
    
    this->Banco.cadastra_cliente(conta);
    menu_inicial();
}

void menu::menu_transaction()
{
    std :: string pagador;
    std :: string recebedor;
    double valor;

    cout << "<=======================================================================================>" << endl;
    cout << "<============================ MENU DE TRANSAÇAO ========================================>" << endl;
    cout << endl;
    cout << "Digite o nome da sua conta : ";
    cin >> pagador;
    cout << "Digite o nome de qm vai receber: ";
    cin >> recebedor;
    cout << "Qual o valor a ser transferido? : ";
    cin >> valor;
    system("clear");

    if(this->Banco.transaction(pagador, recebedor, valor))
    {
        cout << "==========<Transaçao realizada com sucesso>======="<< endl;
    } else 
    {
        cout << "=========== ERRO AO FAZER A TRANSAÇAO ======================" << endl;
    }
    
    sleep();
    menu_inicial();
}


void menu::menu_consulta()
{
    cout << "<========================= MENU DE CONSULTA =============================================>" << endl;
    cout << endl << endl;
    cout << "Digite 1 : Ver historico de transacoes da sua conta"  << endl;
    cout << "Digite 2 : Consultar saldo" << endl;
    menu_consulta_opcao();
}


void menu::menu_DepSaq()
{
    cout << "<========================= MENU DE DEPOSITO E SAQUE =============================================>" << endl;
    cout << endl << endl;
    cout << "Digite 1 : Depositar"  << endl;
    cout << "Digite 2 : Sacar" << endl;
    menu_DepSaq_opcao();
}

void menu::menu_inicial_opcao()
{
    int opcao;
    cin >> opcao;
    switch (opcao)
    {
    case 1:
        system("clear");
        menu_cadastro();
        break;
    
    case 2:
        system("clear");
        menu_transaction();
        break;
    
    case 3:
        system("clear");
        menu_consulta();
        break;

    case 4: 
        system("clear");
        menu_DepSaq();

    default:
        system("clear");
        menu_inicial();
        break;
    }
}

void menu::menu_consulta_opcao()
{
    int opcao;
    cin >> opcao;
    switch (opcao)
    {
    case 1:
    {
        system("clear");
        std :: string nome;
        cout << "Qual o nome consultado : ";
        cin >> nome;
        this->Banco.pega_historico(nome);
        sleep();
        menu_inicial();
        break;
    }
    case 2:
    {
        system("clear");
        std :: string nome;
        cout << "Qual o nome consultado : ";
        cin >> nome;
        this->Banco.consultar_saldo(nome);
        sleep();
        menu_inicial();
        break;
    }        
    default:
    {
        menu_inicial();
        break;
    }
    }
}

void menu::menu_DepSaq_opcao()
{
    int opcao;
    cin >> opcao;
    switch (opcao)
    {
    case 1:
    {
        system("clear");
        cout << "Digite o nome da sua conta : ";
        std :: string nome;
        cin >> nome;
        this->Banco.depositar(nome);
        break;
    }
    case 2 :
    {
        system("clear");
        cout << "Digite o nome da sua conta : ";
        std :: string nome;
        cin >> nome;
        this->Banco.sacar(nome);
        break;
    }

    default:
        break;
    }
}