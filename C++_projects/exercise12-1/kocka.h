#ifndef KOCKA_H
#define KOCKA_H
#include "trodimenzionalni.h"

class Kocka : public TroDimenzionalni
{
private:
    static int counter;
public:
    Kocka();
    Kocka(int, int, int);
    static int getCounter();
    static void updateCounter();
    void print();
};

#endif // KOCKA_H
