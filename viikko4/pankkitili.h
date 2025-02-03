#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>

using namespace std;

class Pankkitili
{
public:
    Pankkitili();
    Pankkitili(string);
    double getBalance();
    virtual bool withdraw(double summa);
    virtual bool deposit(double depo);

protected:
    string omistaja;
    double saldo = 0;
};

#endif // PANKKITILI_H
