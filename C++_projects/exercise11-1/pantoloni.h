#ifndef PANTOLONI_H
#define PANTOLONI_H
#include "artikl.h"

class Pantoloni : public Artikl
{
public:
    Pantoloni();
    Pantoloni(char *ime, int golemina, int cena, Datum donesenVoProdavnica);
    void printArtikl();
    Datum presmetajNabavka();
    bool nabavkaOvaaNedela();
};

#endif // PANTOLONI_H
