#include <string>


class account{
    std :: string Name;
    std :: string Password;
    int ID;
    double saldo;
public:
    double getsaldo(const std :: string& name, const std :: string& password) const;
    
    //setters e getters
    void setname(const std :: string& name);
    std :: string getname() const;

    void setpassword(const std :: string& password);
    std :: string getpassword() const;

    void setsaldo(double valor);
};