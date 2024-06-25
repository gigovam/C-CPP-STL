#ifndef DVODIMENZIONALNI_H
#define DVODIMENZIONALNI_H
#include "oblik.h"

class DvoDimenzionalni : public Oblik
{
public:
    virtual double plostina() const = 0;
};

#endif // DVODIMENZIONALNI_H
