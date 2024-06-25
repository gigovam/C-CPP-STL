#include "dvodimenzionalni.h"

DvoDimenzionalni::DvoDimenzionalni() {}

DvoDimenzionalni::DvoDimenzionalni(int x, int y) : Oblik(x, y) { }

void DvoDimenzionalni::print() {
    Oblik::print();
    setPerimeter();
    setArea();
}

int DvoDimenzionalni::getPerimeter() { return perimeter; }

int DvoDimenzionalni::getArea() { return area; }

void DvoDimenzionalni::setPerimeter() { perimeter = 2*this->getX() + 2*this->getY(); }

void DvoDimenzionalni::setArea() { area = this->getX() * this->getY(); }
