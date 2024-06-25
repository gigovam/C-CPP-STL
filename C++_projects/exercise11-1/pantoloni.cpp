#include "pantoloni.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int d = 10;
const int m = 10;
const int g = 2024;

Pantoloni::Pantoloni() {}

Pantoloni::Pantoloni(char *ime, int golemina, int cena, Datum donesenVoProdavnica)
    : Artikl(ime, golemina, cena, donesenVoProdavnica){ }


void Pantoloni::printArtikl() {
    Artikl::printArtikl();
    cout<<"Datum na sledna nabavka: ";
    this->presmetajNabavka().printDatum();
}

Datum Pantoloni::presmetajNabavka() {
    return Artikl::presmetajNabavka();
}

bool Pantoloni::nabavkaOvaaNedela() {
    Datum datum = presmetajNabavka();
    return (datum.getMesec() == m && datum.getGodina() == g && datum.getDen() >= d && datum.getDen() <= (d+7));
}
