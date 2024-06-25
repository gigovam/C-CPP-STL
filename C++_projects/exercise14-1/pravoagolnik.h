#ifndef PRAVOAGOLNIK_H
#define PRAVOAGOLNIK_H
#include "dvodimenzionalni.h"

class Pravoagolnik : public DvoDimenzionalni
{
private:
    int x;
    int y;
public:
    Pravoagolnik();
    Pravoagolnik(int x, int y);
    double plostina() const;
    void print() const;
};

#endif // PRAVOAGOLNIK_H
