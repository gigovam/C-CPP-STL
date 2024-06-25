#include "zivotno.h"
#include <string.h>
#include <iostream>

using std::cout;
using std::endl;

Zivotno::Zivotno() {}

Zivotno::Zivotno(Datum datumRagjanje, Datum datumDonesuvanjeVoZoo, char pol, char *ime, Datum datumPoslednaVakcinacija) {
    this->datumRagjanje = datumRagjanje;
    this->datumDonesuvanjeVoZoo = datumDonesuvanjeVoZoo;
    this->datumPoslednaVakcinacija = datumPoslednaVakcinacija;
    this->pol = pol;
    this->ime = ime;
}

void Zivotno::printZivotno() {
    cout<<"Ime: "<<ime<<endl;
    cout<<"Pol: "<<pol<<endl;
    cout<<"Datum na ragjanje: ";
    datumRagjanje.printDatum();
    cout<<"Datum na priem vo ZOO: ";
    datumDonesuvanjeVoZoo.printDatum();
    cout<<"Datum na posledna vakcinacija: ";
    datumPoslednaVakcinacija.printDatum();
}
