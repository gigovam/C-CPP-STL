#ifndef VLEKACI_H
#define VLEKACI_H
#include "zivotno.h"
#include "datum.h"

class Vlekaci : public Zivotno
{
private:
    Datum datumSlednaVakcinacija;
public:
    Vlekaci();
    Vlekaci(Datum datumRagjanje, Datum datumDonesuvanjeVoZoo, char pol, char *ime,
            Datum datumPoslednaVakcinacija, Datum datumSlednaVakcinacija);
    void printVlekac();
    Datum presmetajVakcinacija();
};

#endif // VLEKACI_H
