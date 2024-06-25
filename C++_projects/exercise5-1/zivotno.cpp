#include "zivotno.h"
#include <string.h>
#include <iostream>

using std::cout;
using std::endl;

Zivotno::Zivotno() : tip(' '), pol(' '), datumRaganje(), datumPriem(), datumPoslednaVakcinacija() {
    ime[0] = '\0';
}

Zivotno::Zivotno(char* ime, char tip, char pol, int den1, int mesec1, int godina1,
                 int den2, int mesec2, int godina2, int den3, int mesec3, int godina3)
    : tip(tip), pol(pol), datumRaganje(den1, mesec1, godina1), datumPriem(den2, mesec2, godina2), datumPoslednaVakcinacija(den3, mesec3, godina3) {
    strncpy(this->ime, ime, 19);
    this->ime[19] = '\0';
}

void Zivotno::prikaziPodatoci() const{
    cout<<"Ime: "<<ime<<endl;
    cout<<"Tip: "<<tip<<endl;
    cout<<"Pol: "<<pol<<endl;
    cout<<"Datum na ragjanje:"<<endl;
    datumRaganje.get();
    cout<<"Datum na priem:"<<endl;
    datumPriem.get();
    cout<<"Datum na posledna vakcinacija:"<<endl;
    datumPoslednaVakcinacija.get();
}

Datum Zivotno::presmetajVakcinacija() const{
    int vakcinacijaInterval = 0;
    switch (tip) {
    case 'c': // Cicaci
        vakcinacijaInterval = 12; // 12 months
        break;
    case 'p': // Ptici
        vakcinacijaInterval = 6; // 6 months
        break;
    case 'v': // Vlekaci
        vakcinacijaInterval = 8; // 8 months
        break;
    default:
        vakcinacijaInterval = 12; // Default to 12 months
    }
    int newDen = datumPoslednaVakcinacija.getDen();
    int newMesec = datumPoslednaVakcinacija.getMesec() + vakcinacijaInterval;
    int newGodina = datumPoslednaVakcinacija.getGodina();
    if (newMesec > 12) {
        newGodina += newMesec / 12;
        newMesec = newMesec % 12;
    }
    return Datum(newDen, newMesec, newGodina);
}

char Zivotno::getTip() const{
    return tip;
}
