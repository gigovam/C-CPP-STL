#ifndef STEDAC_H
#define STEDAC_H
#include "covek.h"

class Stedac
{
private:
    int bilans;
    int kredit;
    Covek lice;
    static int kamata;
    static int brojStedaci;
public:
    Stedac();
    Stedac(int ,int, char*, char*, char*, int);
    static int getBrojStedaci();
    static int getKamata();
};

#endif // STEDAC_H
