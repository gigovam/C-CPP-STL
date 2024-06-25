#include "krug.h"
#include <iostream>

#define PI 3.14;

Krug::Krug() {}

Krug::Krug(int radius) {
    this->radius=radius;
}

double Krug::plostina() const{
    return 2*radius*PI;
}

void Krug::print() const{
    std::cout<<"Oblik: krug"<<std::endl;
    std::cout<<"Radius="<<radius<<std::endl;
}
