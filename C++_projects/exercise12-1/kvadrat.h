#ifndef KVADRAT_H
#define KVADRAT_H
#include "dvodimenzionalni.h"

class Kvadrat : public DvoDimenzionalni
{
    static int counter;
public:
    Kvadrat();
    Kvadrat(int, int);
    void print();
    static int getCounter();
    static void updateCounter();
};

#endif // KVADRAT_H
