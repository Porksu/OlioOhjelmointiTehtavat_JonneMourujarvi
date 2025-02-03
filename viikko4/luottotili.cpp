#include "luottotili.h"

Luottotili::Luottotili() {

}

Luottotili::Luottotili(string omistaja, double lr)
    : Pankkitili(omistaja)
{
    luottoraja = lr;
    cout << "luottoraja= " << luottoraja << endl;
}

bool Luottotili::withdraw(double summa)
{
    cout << "Saldosi on " << saldo << "Haluatko nostaa " << summa << endl;
    if(summa < luottoraja){
        cout << "Nosto onnistui" << "Halusit nostaa" << summa << "Luottoraja on "
         << luottoraja << endl;
        saldo += summa;
        cout << "Saldo on " << saldo << endl;
        cout << "luottoa jaljella" << luottoraja - summa << endl;
        cout << "velkaa " << saldo << endl;
    }
}
bool Luottotili::deposit(double depo)
{
    if(depo < 0){
        cout << "Et voi talettaa negatiivista summaa " << endl;
        return false;
    }
    if(depo > 0 && saldo-depo >=0){
        saldo -= depo;
        cout << "Talletus onnistui" << saldo << endl;
        return true;
    }
    if(saldo - depo <= 0){
        cout << "talletat liikaa rahaa! " << saldo << endl;
    }
    else {
        return false;
    }
}
