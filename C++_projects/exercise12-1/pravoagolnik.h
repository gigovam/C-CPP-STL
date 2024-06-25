#ifndef PRAVOAGOLNIK_H
#define PRAVOAGOLNIK_H
#include "dvodimenzionalni.h"

class Pravoagolnik : public DvoDimenzionalni
{
private:
    static int counter;
public:
    Pravoagolnik();
    Pravoagolnik(int, int);
    static int getCounter();
    static void updateCounter();
    void print();
};

#endif // PRAVOAGOLNIK_H
