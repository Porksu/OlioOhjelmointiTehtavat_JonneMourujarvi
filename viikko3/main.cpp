#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef c_olio("Gordon");
    ItalianChef i_olio("Mario");
    cout << c_olio.makeSalad(30) << " Annosta" << endl;
    cout << c_olio.makeSoup(300) << " Annosta" << endl;
    i_olio.askSecret("pizza", 100, 1234);
    return 0;
}
