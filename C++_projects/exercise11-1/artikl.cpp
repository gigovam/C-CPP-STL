#include "artikl.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Artikl::Artikl() {}

Artikl::Artikl(char *ime, int golemina, int cena, Datum donesenVoProdavnica) {
    this->ime = ime;
    this->golemina = golemina;
    this->cena = cena;
    this->donesenVoProdavnica = donesenVoProdavnica;
}


void Artikl::printArtikl() {
    cout<<"Ime: "<<ime<<endl;
    cout<<"Golemina: "<<golemina<<endl;
    cout<<"Cena: "<<cena<<endl;
    cout<<"Datum: ";
    donesenVoProdavnica.printDatum();
}


Datum Artikl::presmetajNabavka() {
    Datum datum;
    if(donesenVoProdavnica.getMesec() == 12) {
        datum = Datum(donesenVoProdavnica.getDen(), 1, donesenVoProdavnica.getGodina() + 1);
    }
    else {
        datum = Datum(donesenVoProdavnica.getDen(), donesenVoProdavnica.getMesec()+1, donesenVoProdavnica.getGodina());
    }
    return datum;
}

int Artikl::getCena() { return cena; }
