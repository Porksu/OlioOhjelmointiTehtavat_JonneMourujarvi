#include <iostream>
#include "seuraaja.h"
#include<memory>
#include "notifikaattori.h"

using namespace std;

int main()
{
    Seuraaja *A = new Seuraaja("Aapeli");
    Seuraaja *B = new Seuraaja("Bapeli");
    Seuraaja *C = new Seuraaja("Capeli");

    notifikaattori *N = new notifikaattori();
    cout << endl;

    N->lisaa(A);
    N->lisaa(B);
    N->lisaa(C);
    cout << endl;

    N->tulosta();
    cout << endl;

    N->postita("Ensimmainen viesti");
    cout << endl;

    N->poista(B);
    N->tulosta();
    cout << endl;

    N->postita("Toinen viesti");
    cout << endl;

    delete A;
    delete B;
    delete C;
    delete N;

    return 0;
}
