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
        cout <<  "inga pengar, tilillä ei ole rahaa" << endl;
        return false;
    }
    if (summa < 0){
        cout << "Nostettava summa ei voi olla negatiivinen" << endl;
        return false;
    }
    if (summa <= saldo){
        saldo -= summa;
        cout << "saldo jalkeen " << saldo << endl;
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
