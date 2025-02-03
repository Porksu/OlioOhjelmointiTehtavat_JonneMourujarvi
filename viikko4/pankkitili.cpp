#include "pankkitili.h"

Pankkitili::Pankkitili() {
    cout << "destruktori" << endl;
}

Pankkitili::Pankkitili(string kayttaja)
{
    omistaja = kayttaja;
}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::withdraw(double summa)
{
    if (summa > saldo){
        return false;
    }
    if (summa < 0){
        return false;
    }
    if (summa <= saldo){
        saldo -= summa;
        return true;
    }
    else {
        return false;
    }
}

bool Pankkitili::deposit(double depo)
{
    if(depo < 0){
        cout << "Et voi tallettaa negatiivista summaa " << endl;
        return false;
    }
    if(depo > 0){
        cout << "Talletus onnistui! Maara : " << depo << endl;
        saldo += depo;
        cout << "Saldon maara: " << getBalance() << endl;
        return true;
    }
    else {
        return false;
    }
}
