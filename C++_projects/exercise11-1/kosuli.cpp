#include "kosuli.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int d = 10;
const int m = 10;
const int g = 2024;


Kosuli::Kosuli() {}

Kosuli::Kosuli(char *ime, int golemina, int cena, Datum donesenVoProdavnica, Datum datumSlednaNabavka)
    : Artikl(ime, golemina, cena, donesenVoProdavnica) {
    this->datumSlednaNabavka = datumSlednaNabavka;
}

void Kosuli::printArtikl() {
    Artikl::printArtikl();
    cout<<"Datum na sledna nabavka: ";
    this->presmetajNabavka().printDatum();
}

Datum Kosuli::presmetajNabavka() {
    return datumSlednaNabavka;
}

bool Kosuli::nabavkaOvaaNedela() {
    Datum datum = presmetajNabavka();
    return (datum.getMesec() == m && datum.getGodina() == g && datum.getDen() >= d && datum.getDen() <= d+7);
}
