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
    if (summa < 0){
        cout << "Luoton nosto ei voi olla negatiivinen" << endl;
    } else if (summa > luottoraja)
    {
        cout << "Ei riita" << endl;
    }
    else {
        saldo += summa;
        cout << "nostettu velka " << summa << endl;
        cout << "velan saldo " << saldo << endl;
        cout << "luotto " << luottoraja - saldo << endl;
        return true;
    }
}
bool Luottotili::deposit(double depo)
{
    if(depo < 0){
        cout << "ei voi olla negatiivista summaa " << endl;
        return false;
    }
    if(depo > 0 && saldo-depo >=0){
        saldo -= depo;
        cout << "Talletus onnistui laina on nyt" << saldo << endl;
        return true;
    }
    if(saldo - depo <= 0){
        cout << "talletat liikaa rahaa! laina on" << saldo << endl;
    }
    else {
        return false;
    }
}
