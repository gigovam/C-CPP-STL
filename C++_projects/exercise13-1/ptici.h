#ifndef PTICI_H
#define PTICI_H
#include "zivotno.h"

class Ptici : public Zivotno
{
private:
    char letac;
public:
    Ptici();
    Ptici(Datum datumRagjanje, Datum datumDonesuvanjeVoZoo, char pol, char *ime,
          Datum datumPoslednaVakcinacija, char letac);
    void printPtici();
    Datum presmetajVakcinacija();
};

#endif // PTICI_H
