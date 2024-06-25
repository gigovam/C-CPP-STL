#ifndef KRUG_H
#define KRUG_H
#include "dvodimenzionalni.h"

class Krug : public DvoDimenzionalni
{
private:
    int radius;
public:
    Krug();
    Krug(int radius);
    void print()const;
    double plostina()const;
};

#endif // KRUG_H
