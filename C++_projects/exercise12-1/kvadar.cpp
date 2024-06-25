#include "kvadar.h"
#include <iostream>

using std::cout;
using std::endl;

int Kvadar::counter = 0;

Kvadar::Kvadar() {}

Kvadar::Kvadar(int x, int y, int z) : TroDimenzionalni(x, y, z) {
    Kvadar::updateCounter();
}

void Kvadar::print() {
    cout<<"Trodimenzionalen oblik kvadar."<<endl;
    TroDimenzionalni::print();
}

int Kvadar::getCounter() { return counter; }

void Kvadar::updateCounter() { counter++; }
