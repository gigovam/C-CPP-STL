#ifndef ARTIKL_H
#define ARTIKL_H
#include "datum.h"

class Artikl
{
protected:
    char *ime;
    int golemina;
    int cena;
    Datum donesenVoProdavnica;
public:
    Artikl();
    Artikl(char *, int, int, Datum);
    virtual void printArtikl() = 0;
    Datum presmetajNabavka();
    virtual bool nabavkaOvaaNedela() = 0;
    int getCena();
};

#endif // ARTIKL_H
