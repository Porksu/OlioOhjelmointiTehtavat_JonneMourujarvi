#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int maxnum) {
    srand(time(nullptr));
    int randomnumero = rand() % maxnum;
    int numero;
    int arvaukset;

    cout<<"Anna numero 0-40 valilta ";

    do{
        cin >> numero;
        if(numero < randomnumero)
        {
               arvaukset++;
            cout <<"Numero on liian pieni" << endl;
        } else if (numero > randomnumero)
        {
            cout <<"Numero on liian iso" << endl;
            arvaukset++;
        }
    } while (numero != randomnumero);
    cout << "Numero on oikein! " << "Arvausten maara:" << arvaukset << endl;
    return 0;
}
int main()
{
    game(40);
}
