#pragma once

#include <string>
#include <vector>

class account
{
private:
    std :: string Name;
    std :: string Password;
    int ID;
    double Saldo = 300;
    std :: vector<std :: string> historico;
public:
    double getsaldo(const std :: string& name) const;
    
    //setters e getters
    void setname(const std :: string& name);
    std :: string getname() const;

    void setpassword(const std :: string& password);
    std :: string getpassword() const;

    void deposito(double valor);
    void saque(double valor);
    void historico_transacoes();
};
