#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef()
{
    cout << "ItalianChef defaultkonstruktori" << endl;
}

ItalianChef::ItalianChef(string name) : Chef(name)
{
    cout << "ItalianChef konstruktori"<< "kokin nimi" << name << endl;
}

ItalianChef::~ItalianChef()
{
        cout << "ItalianChef destruktori" << endl;
}

bool ItalianChef::askSecret(string pw, int f, int w)
{
    if(pw.compare(password) == 0)
    {
        water = w;
        flour = f;
        cout << "Password correct!" << endl;
        makePizza();
        return true;
    } else {
        cout << "Password incorrect" << endl;
        return false;
    };
}

int ItalianChef::makePizza()
{
    int annoksia = 0;
    int pitsa = min(flour, water);
    annoksia = pitsa / 5;
    cout << "Veden maara: " << water << " Jauhojen maara: " << flour << endl;
    cout <<"Annoksia:" << annoksia << endl;
    return annoksia;
}
