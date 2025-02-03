#include "asiakas.h"

asiakas::asiakas(string nimi, double lr) : kayttotili(nimi), luottotili(nimi, lr)
{
    cout << "Asiakas" << nimi << endl;
    name = nimi;
}

bool asiakas::talletus(double depo)
{
    return kayttotili.deposit(depo);
}

bool asiakas::nosto(double summa)
{
    return kayttotili.withdraw(summa);
}

bool asiakas::luotonMaksu(double maksu)
{
    return kayttotili.deposit(maksu);
}

bool asiakas::luotonNosto(double nosto)
{
    return kayttotili.withdraw(nosto);
}

void asiakas::showSaldo()
{
    cout << "Kayttotilisi saldo on " << kayttotili.getBalance() << endl  << "Luottotilisi saldo on " << luottotili.getBalance() << endl;
}

bool asiakas::tilisiirto(double summa, asiakas &saaja)
{
    cout << "Tililta " << name << "Raha siirretty " << summa << endl;
    saaja.talletus(summa);
    return true;
}

string asiakas::getName() const
{
    return name;
}
