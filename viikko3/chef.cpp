#include "chef.h"

Chef::Chef()
{
     cout << "Chef defaultkonstruktori" << endl;
}

Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef konstruktori, nimi" << chefName << endl;
}

Chef::~Chef()
{
    cout << "Chef desktruktori" << endl;
}

string Chef::getChefName() const
{
    return chefName;
}

int Chef::makeSalad(int aines)
{
    int annostemaara;
    cout << "Aineksen maara " << aines << endl;
    annostemaara = aines / 5;
    return annostemaara;
}
int Chef::makeSoup(int aines)
{
    int annostemaara;
    cout << "Aineksen maara " << aines << endl;
    annostemaara = aines / 3;
    return annostemaara;
}
