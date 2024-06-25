#include "stedac.h"

Stedac::Stedac() : bilans(0), kredit(0), lice(){}

int Stedac::kamata = 10;
int Stedac::brojStedaci = 0;

Stedac::Stedac(int b, int k, char *i, char*p, char *a, int br) : bilans(b), kredit(k), lice(i, p, a, br){
    ++brojStedaci;
}

int Stedac::getBrojStedaci() {
    return brojStedaci;
}

int Stedac::getKamata() {
    return kamata;
}
