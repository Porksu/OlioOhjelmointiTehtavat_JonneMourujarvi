#include "notifikaattori.h"

notifikaattori::notifikaattori() {}

void notifikaattori::lisaa(Seuraaja * lisaa)
{
    lisaa ->next = seuraajat;
    seuraajat = lisaa;
    cout << "Lisatty" << lisaa ->getNimi() << endl;
}

void notifikaattori::poista(Seuraaja * poista)
{
    Seuraaja *alku = seuraajat;
    while (alku != nullptr){
        if(alku -> next == poista)
        {
            alku -> next = poista -> next;
            cout << "Poistettu" << poista->getNimi() << endl;
        } else {
            alku = alku -> next;
        }
    }
}

void notifikaattori::tulosta()
{
     Seuraaja *alku = seuraajat;
    while(alku != nullptr)
    {
         if (alku != nullptr){
            cout << alku->getNimi() << endl;
             alku = alku ->next;
         } else {
             cout << "Loppu" << endl;
         }
    }
}

void notifikaattori::postita(string viesti)
{
     Seuraaja *alku = seuraajat;
    while (alku != nullptr){
         alku -> paivitys(viesti);
        alku = alku -> next;
    }
}
