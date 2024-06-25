#ifndef ZIVOTNO_H
#define ZIVOTNO_H
#include "datum.h"

class Zivotno
{
protected:
    Datum datumRagjanje;
    Datum datumDonesuvanjeVoZoo;
    char pol;
    char *ime;
    Datum datumPoslednaVakcinacija;

public:
    Zivotno();
    Zivotno(Datum datumRagjanje, Datum datumDonesuvanjeVoZoo, char pol, char *ime, Datum datumPoslednaVakcinacija);
    void printZivotno();
    virtual Datum presmetajVakcinacija() = 0;
    virtual ~Zivotno() = default;
};

#endif // ZIVOTNO_H
