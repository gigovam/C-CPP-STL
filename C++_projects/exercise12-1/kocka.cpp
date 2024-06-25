#include "kocka.h"
#include <iostream>
#include <cassert>

using std::cout;
using std::endl;

int Kocka::counter = 0;

Kocka::Kocka() {}

Kocka::Kocka(int x, int y, int z) : TroDimenzionalni(x, y, z) {
    //assert(x == y == z);
    Kocka::updateCounter();
}

void Kocka::print() {
    cout<<"Trodimenzionalen oblik kocka."<<endl;
    TroDimenzionalni::print();
}

int Kocka::getCounter() { return counter; }

void Kocka::updateCounter() { counter++; }
