#include "datum.h"
#include <iostream>

using std::cout;
using std::endl;

Datum::Datum() {}

Datum::Datum(int den, int mesec, int godina) {
    this->den = den;
    this->mesec = mesec;
    this->godina = godina;
}

void Datum::printDatum() {
    cout<<den<<"/"<<mesec<<"/"<<godina<<endl;
}

int Datum::getDen() { return den; }

int Datum::getMesec() { return mesec; }

int Datum::getGodina() { return godina; }
