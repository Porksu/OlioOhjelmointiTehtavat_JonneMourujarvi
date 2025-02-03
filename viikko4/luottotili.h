#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitili.h"

class Luottotili : public Pankkitili
{
public:
    Luottotili();
    Luottotili(string omistaja, double lr);
    virtual bool withdraw(double summa) override;
    virtual bool deposit(double depo) override;

protected:
    double luottoraja = 0;
};

#endif // LUOTTOTILI_H
