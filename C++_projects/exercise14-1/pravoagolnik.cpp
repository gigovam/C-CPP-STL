#include "pravoagolnik.h"
#include <iostream>

Pravoagolnik::Pravoagolnik() {}

Pravoagolnik::Pravoagolnik(int x, int y) {
    this->x = x;
    this->y = y;
}

double Pravoagolnik::plostina() const{
    return x*y;
}

void Pravoagolnik::print() const{
    std::cout<<"Oblik: pravoagolnik"<<std::endl;
    std::cout<<"Strani: x="<<x<<" y="<<y<<std::endl;
}
