#ifndef KVADRAT_H
#define KVADRAT_H
#include "dvodimenzionalni.h"

class Kvadrat : public DvoDimenzionalni
{
private:
    int x;
public:
    Kvadrat();
    Kvadrat(int x);
    void print() const;
    double plostina() const;
};

#endif // KVADRAT_H
