#include "cicaci.h"
#include <iostream>

Cicaci::Cicaci() {}

Cicaci::Cicaci(Datum datumRagjanje, Datum datumDonesuvanjeVoZoo, char pol, char *ime,
               Datum datumPoslednaVakcinacija, char prezivar)
    : Zivotno(datumRagjanje, datumDonesuvanjeVoZoo, pol, ime, datumPoslednaVakcinacija) {
    this->prezivar = prezivar;
}

Datum Cicaci::presmetajVakcinacija() {
    return Datum(datumPoslednaVakcinacija.getDen(), datumPoslednaVakcinacija.getMesec(),
                 datumPoslednaVakcinacija.getGodina() + 1);
}

void Cicaci::printCicac() {
    Datum datum = presmetajVakcinacija();
    Zivotno::printZivotno();
    std::cout<<"Prezivar: "<<prezivar<<std::endl;
    std::cout<<"Datum na sledna vakcinacija: ";
    datum.printDatum();
}
