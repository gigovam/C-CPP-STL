#ifndef KVADAR_H
#define KVADAR_H
#include "trodimenzionalni.h"

class Kvadar : public TroDimenzionalni
{
private:
    static int counter;
public:
    Kvadar();
    Kvadar(int, int, int);
    static int getCounter();
    static void updateCounter();
    void print();
};

#endif // KVADAR_H
