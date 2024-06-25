#ifndef MATRICA_H
#define MATRICA_H
#include <iostream>

using std::ostream;
using std::istream;


class Matrica
{
    friend istream &operator>>(istream &, Matrica &);
    friend ostream &operator<<(ostream &, const Matrica &);
    friend Matrica &operator+(int, Matrica &);
    friend Matrica &operator-(int, Matrica &);
    friend Matrica &operator*(int, Matrica &);
private:
    int size;
    int rows;
    int columns;;
    int *ptr;
public:
    Matrica(int rows=3, int columns=3);
    Matrica(const Matrica&);
    int &operator[](int);
    Matrica &operator+(Matrica &);
    Matrica &operator-(Matrica &);
    Matrica &operator*(Matrica &);
    Matrica &operator+(int);
    Matrica &operator-(int);
    Matrica &operator*(int);
    bool operator==(Matrica &);
    bool operator!=(Matrica &);
};

#endif // MATRICA_H
