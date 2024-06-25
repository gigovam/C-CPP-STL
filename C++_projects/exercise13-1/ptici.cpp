#include "ptici.h"
#include <iostream>

Ptici::Ptici() {}

Ptici::Ptici(Datum datumRagjanje, Datum datumDonesuvanjeVoZoo, char pol, char *ime,
             Datum datumPoslednaVakcinacija, char letac)
    : Zivotno(datumRagjanje, datumDonesuvanjeVoZoo, pol, ime, datumPoslednaVakcinacija){
    this->letac = letac;
}

Datum Ptici::presmetajVakcinacija() {
    Datum datum;
    if(datumPoslednaVakcinacija.getMesec() <= 6) {
        datum = Datum(datumPoslednaVakcinacija.getDen(), datumPoslednaVakcinacija.getMesec() + 6,
                      datumPoslednaVakcinacija.getGodina());
    }
    else {
        datum = Datum(datumPoslednaVakcinacija.getDen(), 12 - datumPoslednaVakcinacija.getMesec(),
                      datumPoslednaVakcinacija.getGodina() + 1);
    }
    return datum;
}

void Ptici::printPtici() {
    Datum datum = presmetajVakcinacija();
    Zivotno::printZivotno();
    std::cout<<"Letac: "<<letac<<std::endl;
    std::cout<<"Datum na sledna vakcinacija: ";
    datum.printDatum();
}

