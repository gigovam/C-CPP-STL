#ifndef DVODIMENZIONALNI_H
#define DVODIMENZIONALNI_H
#include "oblik.h"

class DvoDimenzionalni : public Oblik
{
private:
    int perimeter;
    int area;
public:
    DvoDimenzionalni();
    DvoDimenzionalni(int, int);
    void print();
    void setPerimeter();
    int getPerimeter();
    void setArea();
    int getArea();
};

#endif // DVODIMENZIONALNI_H
