#include "datum.h"
#include <iostream>

Datum::Datum() {}

Datum::Datum(int d, int m, int g) {
    den = d;
    mesec = m;
    godina = g;
}

int Datum::getDen() { return den; }

int Datum::getMesec() { return mesec; }

int Datum::getGodina() { return godina; }

void Datum::printDatum() {
    std::cout<<den<<"/"<<mesec<<"/"<<godina<<std::endl;
}
