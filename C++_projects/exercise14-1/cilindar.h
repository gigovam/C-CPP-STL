#ifndef CILINDAR_H
#define CILINDAR_H
#include "trodimenzionalni.h"

class Cilindar : public TroDimenzionalni
{
private:
    int radius;
    int h;
public:
    Cilindar();
    Cilindar(int radius, int h);
    void print()const;
    double plostina() const;
    double volumen() const;
};

#endif // CILINDAR_H
