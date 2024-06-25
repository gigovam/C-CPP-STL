#include "cilindar.h"
#include <iostream>
#define PI 3.14;

Cilindar::Cilindar() {}

Cilindar::Cilindar(int radius, int h) {
    this->radius = radius;
    this->h=h;
}

double Cilindar::plostina() const{
    return 2*radius*radius*PI + 2*radius*h*PI;
}

double Cilindar::volumen() const{
    return radius*radius*h*PI;
}

void Cilindar::print() const{
    std::cout<<"Oblik: cilindar"<<std::endl;
    std::cout<<"Radius="<<radius<<" visina="<<h<<std::endl;
}
