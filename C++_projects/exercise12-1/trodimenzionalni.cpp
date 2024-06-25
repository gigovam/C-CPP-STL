#include "trodimenzionalni.h"
#include<iostream>

using std::cout;
using std::endl;

TroDimenzionalni::TroDimenzionalni() {}

TroDimenzionalni::TroDimenzionalni(int x, int y, int z) : Oblik(x, y) {
    this->z = z;
    setPerimeter();
    setArea();
    setVolume();
}

int TroDimenzionalni::getZ() { return z; }

int TroDimenzionalni::getPerimeter() { return perimeter; }

void TroDimenzionalni::setPerimeter() { perimeter = 4*this->getX() + 4*this->getY() + 4*z; }

int TroDimenzionalni::getArea() { return area; }

void TroDimenzionalni::setArea() { area = 2*this->getX()*this->getY() + 2*this->getY()*z + 2*this->getX()*z; }

int TroDimenzionalni::getVolume() { return volume; }

void TroDimenzionalni::setVolume() { volume = this->getX()*this->getY()*z; }

void TroDimenzionalni::print() {
    Oblik::print();
    cout<<"z= "<<z<<endl;
}
