#include "datum.h"
#include <iostream>


using std::cout;
using std::endl;

Datum::Datum() : den(0), mesec(0), godina(0) {}

Datum::Datum(int d, int m, int g) : den(d), mesec(m), godina(g) {}

void Datum::get() const{
    cout<<den<<"/"<<mesec<<"/"<<godina<<endl;
}

int Datum::getDen () const{
    return den;
}

int Datum::getMesec () const{
    return mesec;
}

int Datum::getGodina () const{
    return godina;
}
