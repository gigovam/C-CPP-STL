#include "kvadar.h"
#include <iostream>

Kvadar::Kvadar() {}

Kvadar::Kvadar(int x, int y, int z) {
    this->x=x;
    this->y=y;
    this->z=z;
}

double Kvadar::plostina()const {
    return 2*x*y + 2*y*z + 2*x*z;
}

double Kvadar::volumen()const {
    return x*y*z;
}

void Kvadar::print() const{
    std::cout<<"Oblik: kvadar"<<std::endl;
    std::cout<<"Strani: x="<<x<<" y="<<y<<" z="<<z<<std::endl;
}
