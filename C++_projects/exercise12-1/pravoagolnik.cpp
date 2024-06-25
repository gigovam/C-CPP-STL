#include "pravoagolnik.h"
#include <iostream>

using std::cout;
using std::endl;

int Pravoagolnik::counter = 0;

Pravoagolnik::Pravoagolnik() {}

Pravoagolnik::Pravoagolnik(int x, int y) : DvoDimenzionalni(x, y) {
    Pravoagolnik::updateCounter();
}

void Pravoagolnik::print() {
    cout<<"Dvodimenzionalen oblik pravoagolnik."<<endl;
    DvoDimenzionalni::print();
}

int Pravoagolnik::getCounter() { return counter; }

void Pravoagolnik::updateCounter() { counter++; }
