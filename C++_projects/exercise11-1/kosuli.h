#ifndef KOSULI_H
#define KOSULI_H
#include "artikl.h"
#include "datum.h"

class Kosuli : public Artikl
{
private:
    Datum datumSlednaNabavka;
public:
    Kosuli();
    Kosuli(char *ime, int golemina, int cena, Datum donesenVoProdavnica, Datum datumSlednaNabavka);
    void printArtikl();
    Datum presmetajNabavka();
    bool nabavkaOvaaNedela();
};

#endif // KOSULI_H
