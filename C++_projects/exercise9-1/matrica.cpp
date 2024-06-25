#include "matrica.h"
#include <cassert>
#include <stdlib.h>

using std::endl;
using std::cout;

Matrica::Matrica(int rows, int columns) {
    this->rows = rows;
    this->columns = columns;
    size = rows*columns;
    ptr = new int[size];
    assert( ptr != 0 );
    for(int i=0; i<size; i++) {
        ptr[i] = 0;
    }
}

Matrica::Matrica(const Matrica &matrica) {
    rows = matrica.rows;
    columns = matrica.columns;
    size = rows*columns;
    ptr = new int[size];
    assert( ptr != 0 );
    for(int i=0; i<size; i++) {
        ptr[i] = matrica.ptr[i];
    }
}

int & Matrica::operator[](int index) {
    assert(index >=0 && index < size);
    return ptr[index];
}

bool Matrica::operator==(Matrica & matrica) {
    bool flag = 1;
    if(rows != matrica.rows || columns != matrica.columns) {
        flag=0;
    }
    else {
        for(int i=0; i<size; i++) {
            if(ptr[i] != matrica.ptr[i]) {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}

bool Matrica::operator!=(Matrica & matrica) {
    return (!(*this == matrica));
}

ostream &operator<<(ostream &output, const Matrica & matrica) {
    int i;
    output << matrica.rows << "x" << matrica.columns << endl;
    for(i=0; i<matrica.size; i++) {
        output << matrica.ptr[i] << " ";
        if((i+1) % matrica.columns == 0) {
            output << endl;
        }
    }
    if(i%matrica.rows != 0)
        output << endl;
    return output;
}

istream &operator>>(istream &input, Matrica &matrica) {
    input >> matrica.rows;
    input.ignore();
    input >> matrica.columns;
    for(int i=0; i<matrica.size; i++) {
        input >> matrica.ptr[i];
        input.ignore();
    }
    return input;
}

Matrica & Matrica::operator+(Matrica & matrica) {
    assert(matrica.size == size);
    Matrica *m = new Matrica();
    m->size = size;
    m->rows = rows;
    m->columns = columns;
    for(int i=0; i<size; i++) {
        m->ptr[i] = matrica.ptr[i] + ptr[i];
    }
    return *m;
}

Matrica & Matrica::operator-(Matrica & matrica) {
    assert(matrica.size == size);
    Matrica *m = new Matrica();
    m->size = size;
    m->rows = rows;
    m->columns = columns;
    for(int i=0; i<size; i++) {
        m->ptr[i] = matrica.ptr[i] - ptr[i];
    }
    return *m;
}

Matrica & Matrica::operator*(Matrica & matrica) {
    assert(matrica.size == size);
    Matrica *m = new Matrica();
    m->size = size;
    m->rows = rows;
    m->columns = columns;
    for(int i=0; i<size; i++) {
        m->ptr[i] = matrica.ptr[i] * ptr[i];
    }
    return *m;
}

Matrica & Matrica::operator+(int i) {
    for(int j=0; j<size; j++) {
        ptr[j] += i;
    }
    return *this;
}

Matrica & Matrica::operator-(int i) {
    for(int j=0; j<size; j++) {
        ptr[j] -= i;
    }
    return *this;
}

Matrica & Matrica::operator*(int i) {
    for(int j=0; j<size; j++) {
        ptr[j] *= i;
    }
    return *this;
}

Matrica &operator+(int i, Matrica & matrica) {
    for(int j=0; j<matrica.size; j++) {
        matrica.ptr[j] += i;
    }
    return matrica;
}

Matrica &operator-(int i, Matrica & matrica) {
    for(int j=0; j<matrica.size; j++) {
        matrica.ptr[j] -= i;
    }
    return matrica;
}

Matrica &operator*(int i, Matrica & matrica) {
    for(int j=0; j<matrica.size; j++) {
        matrica.ptr[j] *= i;
    }
    return matrica;
}




