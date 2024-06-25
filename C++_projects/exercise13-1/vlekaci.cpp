#include "vlekaci.h"
#include <iostream>

Vlekaci::Vlekaci() {}

Vlekaci::Vlekaci(Datum datumRagjanje, Datum datumDonesuvanjeVoZoo, char pol, char *ime,
        Datum datumPoslednaVakcinacija, Datum datumSlednaVakcinacija)
    : Zivotno(datumRagjanje, datumDonesuvanjeVoZoo, pol, ime, datumPoslednaVakcinacija){
    this->datumSlednaVakcinacija = datumSlednaVakcinacija;
}

void Vlekaci::printVlekac() {
    Zivotno::printZivotno();
    std::cout<<"Datum na sledna vakcinacija: ";
    datumSlednaVakcinacija.printDatum();
}

Datum Vlekaci::presmetajVakcinacija() {
    return datumSlednaVakcinacija;
}
