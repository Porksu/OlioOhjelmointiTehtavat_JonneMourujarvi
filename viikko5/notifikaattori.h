#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include"seuraaja.h"

class notifikaattori
{
public:
    notifikaattori();
    void lisaa(Seuraaja *);
    void poista(Seuraaja *);
    void tulosta();
    void postita(string viesti);

    Seuraaja *getSeuraajat() const;

private:
    Seuraaja *seuraajat = nullptr;
};

#endif // NOTIFIKAATTORI_H
