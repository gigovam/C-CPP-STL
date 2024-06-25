#include <iostream>
#include "dropki.h"

using namespace std;

int main()
{
    int broitel1, broitel2, imenitel1, imenitel2;
    cout << "Vnesuvanje na prvata dropka:" << endl;
    cout<<"Vnesi broitel:"; cin>>broitel1;
    cout<<"Vnesi imenitel:"; cin>>imenitel1;
    Dropki dropka1(broitel1, imenitel1);

    cout << "Vnesuvanje na vtorata dropka:" << endl;
    cout<<"Vnesi broitel:"; cin>>broitel2;
    cout<<"Vnesi imenitel:"; cin>>imenitel2;
    Dropki dropka2(broitel2, imenitel2);

    Dropki::soberi(dropka1, dropka2);
    Dropki::odzemi(dropka1, dropka2);
    Dropki::mnozhi(dropka1, dropka2);
    Dropki::deli(dropka1, dropka2);

    return 0;
}
