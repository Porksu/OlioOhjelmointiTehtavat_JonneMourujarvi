#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    asiakas A("Eino", 1000);
    cout << endl;
    A.showSaldo();
    cout << endl;
    A.talletus(250);
    cout << endl;
    A.luotonNosto(150);
    cout << endl;
    A.showSaldo();
    cout << endl;

    asiakas B("Marjatta", 1000);
    cout << endl;
    B.showSaldo();
    cout << endl;
    cout << B.getName();
    cout << endl;
    A.tilisiirto(50, B);
    cout << endl;
    cout << B.getName();
    cout << endl;
    B.showSaldo();
    cout << endl;
}
