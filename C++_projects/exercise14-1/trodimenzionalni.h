#ifndef TRODIMENZIONALNI_H
#define TRODIMENZIONALNI_H
#include "oblik.h"

class TroDimenzionalni : public Oblik
{
public:
    virtual double plostina() const = 0;
    virtual double volumen() const = 0;
};

#endif // TRODIMENZIONALNI_H
