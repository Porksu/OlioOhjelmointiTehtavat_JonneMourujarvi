#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"

using namespace std;

class asiakas
{
public:
    asiakas(string nimi, double lr);
    bool talletus(double depo);
     bool nosto(double summa);
     bool luotonMaksu(double maksu);
      bool luotonNosto(double nosto);
      void showSaldo();
      bool tilisiirto(double summa, asiakas &saaja);

      string getName() const;
  private:
      Pankkitili kayttotili;
      Luottotili luottotili;
      string name;
};

#endif // ASIAKAS_H
