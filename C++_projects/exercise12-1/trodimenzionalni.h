#ifndef TRODIMENZIONALNI_H
#define TRODIMENZIONALNI_H
#include "oblik.h"

class TroDimenzionalni : public Oblik
{
private:
    int z;
    int perimeter;
    int area;
    int volume;
public:
    TroDimenzionalni();
    TroDimenzionalni(int, int, int);
    int getZ();
    int getPerimeter();
    void setPerimeter();
    int getArea();
    void setArea();
    int getVolume();
    void setVolume();
    void print();
};

#endif // TRODIMENZIONALNI_H
