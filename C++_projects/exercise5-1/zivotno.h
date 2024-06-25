#ifndef ZIVOTNO_H
#define ZIVOTNO_H

#include "datum.h"

class Zivotno
{
public:
    Zivotno(char*, char, char, int, int, int, int, int, int, int, int, int);
    Zivotno();
    void prikaziPodatoci() const;
    Datum presmetajVakcinacija() const;
    char getTip() const;
private:
    Datum datumRaganje;
    Datum datumPriem;
    Datum datumPoslednaVakcinacija;
    char tip;
    char pol;
    char ime[20];
};

#endif // ZIVOTNO_H
