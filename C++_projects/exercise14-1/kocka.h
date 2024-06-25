#ifndef KOCKA_H
#define KOCKA_H
#include "trodimenzionalni.h"

class Kocka : public TroDimenzionalni
{
private:
    int x;
public:
    Kocka();
    Kocka(int x);
    void print()const;
    double plostina() const;
    double volumen()const;
};

#endif // KOCKA_H
