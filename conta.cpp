#include "conta.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using std :: string;

account::account(const std:: string& name, const std:: string& senha)
{
    this->setname(name);
    this->setpassword(senha);
}

double account::getsaldo(const string& name) const {
    if(Name == name)
    {
        return this->Saldo;
    }
    return -1;
}

void account::setname(const string& name)
{
    this->Name = name;
}

string account::getname() const
{
    return this->Name;
}

void account::setpassword(const string& password)
{
    this->Password = password;
}

string account::getpassword() const
{
    return this->Password;
}

void account::deposito(double valor)
{
    this->Saldo += valor;
    std :: stringstream fluxo;
    fluxo << std::fixed << std:: setprecision(2) << valor;
    string valorstring = fluxo.str();
    
    this->historico.push_back("deposito : " + valorstring);
}

void account::saque(double valor)
{
    if(this->Saldo >= valor)
    {
    this->Saldo -= valor;
    
    std :: stringstream fluxo;
    fluxo << std::fixed << std:: setprecision(2) << valor;
    string valorstring = fluxo.str();
    this->historico.push_back("saque : -" + valorstring);

    }else std :: cout << "SALDO INSUFICIENTE PRO SAQUE" << std::endl;

}

void account::historico_transacoes() const
{
    int tam = this->historico.size();
    std::cout << "{";
    for(auto a = 0; a < tam; a++)
    {
        if(this->historico[a] == this->historico[tam - 1])
        {
            std:: cout << this->historico[a];
            continue;
        }
        std::cout << this->historico[a] << ", "; 
    }
    std::cout << "}" << std::endl;
}