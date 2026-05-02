#include "conta.hpp"
#include <iostream>
using std :: string;

double account::getsaldo(const string& name, const string& password) const {
    if(Name == name)
    {
        if(Password == password)
        {
            return saldo;
        }
    }
    return -1;
}

void account::setname(const string& name)
{
    this->Name = name;
}

string account:: getname() const
{
    return this->Name;
}

void account::setpassword(const string& password)
{
    this->Password = password;
}

string account:: getpassword() const
{
    return this->Password;
}

void account::setsaldo(double valor)
{
    this->saldo = valor;
}