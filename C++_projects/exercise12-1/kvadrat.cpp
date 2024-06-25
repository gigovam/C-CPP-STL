#include "kvadrat.h"
#include <iostream>
#include <cassert>

using std::cout;
using std::endl;

int Kvadrat::counter = 0;

Kvadrat::Kvadrat() {}

Kvadrat::Kvadrat(int x, int y) : DvoDimenzionalni(x, y) {
    //assert(x == y);
    Kvadrat::updateCounter();
}

void Kvadrat::print() {
    cout<<"Dvodimenzionalen oblik kvadrat."<<endl;
    DvoDimenzionalni::print();
}

int Kvadrat::getCounter() { return counter; }

void Kvadrat::updateCounter() { counter++; }
