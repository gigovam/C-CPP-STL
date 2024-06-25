#include "oblik.h"
#include <iostream>

using std::cout;
using std::endl;

Oblik::Oblik() {}

Oblik::Oblik(int x, int y) {
    this->x = x;
    this->y = y;
}

void Oblik::print() {
    cout<<"x= "<<x<<" y= "<<y<<endl;
}

int Oblik::getX() { return x; }

int Oblik::getY() { return y; }

