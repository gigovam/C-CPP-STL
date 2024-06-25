#ifndef KVADAR_H
#define KVADAR_H
#include "trodimenzionalni.h"

class Kvadar : public TroDimenzionalni
{
private:
    int x;
    int y;
    int z;
public:
    Kvadar();
    Kvadar(int x, int y, int z);
    void print()const;
    double plostina() const;
    double volumen() const;
};

#endif // KVADAR_H
