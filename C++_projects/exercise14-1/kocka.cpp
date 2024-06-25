#include "kocka.h"
#include <iostream>

Kocka::Kocka() {}

Kocka::Kocka(int x) {
    this->x=x;
}

void Kocka::print() const{
    std::cout<<"Oblik: kocka"<<std::endl;
    std::cout<<"Strana x="<<x<<std::endl;
}

double Kocka::plostina() const{
    return 6*x*x;
}

double Kocka::volumen() const{
    return x*x*x;
}
