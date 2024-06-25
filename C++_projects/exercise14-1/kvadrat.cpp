#include "kvadrat.h"
#include <iostream>

Kvadrat::Kvadrat() {}

Kvadrat::Kvadrat(int x) {
    this->x=x;
}

void Kvadrat::print() const {
    std::cout<<"Oblik: kvadrat"<<std::endl;
    std::cout<<"Strana: x="<<x<<std::endl;
}

double Kvadrat::plostina() const {
    return x*x;
}
