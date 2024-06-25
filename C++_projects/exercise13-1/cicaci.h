#ifndef CICACI_H
#define CICACI_H
#include "zivotno.h"

class Cicaci : public Zivotno
{
private:
    char prezivar;
public:
    Cicaci();
    Cicaci(Datum datumRagjanje, Datum datumDonesuvanjeVoZoo, char pol, char *ime,
           Datum datumPoslednaVakcinacija, char prezivar);
    void printCicac();
    Datum presmetajVakcinacija();
};

#endif // CICACI_H
