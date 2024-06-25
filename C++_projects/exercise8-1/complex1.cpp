// complex1.cpp
// Definicii na funkciite chlenki na klasata Complex
#include <iostream>
#include <iomanip>

using std::cout;
using std::setw;

#include "complex1.h"

// Konstruktor
Complex::Complex( double r, double i )
    : real( r ), imaginary( i ) { }

// Preklopi operator za sobiranje
Complex Complex::operator+( const Complex &operand2 ) const
{
    return Complex( real + operand2.real,
                   imaginary + operand2.imaginary );
} // kraj na funkcijata operator+

// Preklopi operator za odzemanje
Complex Complex::operator-( const Complex &operand2 ) const
{
    return Complex( real - operand2.real,
                   imaginary - operand2.imaginary );
} // kraj na funkcijata operator-

// Preklopi operator =
const Complex& Complex::operator=( const Complex &right )
{
    real = right.real;
    imaginary = right.imaginary;
    return *this;   // ovozmozhuva kaskadiranje
} // ekraj na funkcijata operator=

ostream &operator<<( ostream& output, const Complex & object) {
    output << '(' << object.real << ", " << object.imaginary << ')';
    return output;
}

istream &operator>>( istream& input, Complex & object) {
    input.ignore(2);
    input >> setw(4) >> object.real;
    input.ignore(2);
    input >> setw(4) >> object.imaginary;
    input.ignore(2);
    return input;
}

Complex Complex::operator*(const Complex & complex) const {
    return Complex( real * complex.real,
                   imaginary * complex.imaginary );
}

Complex Complex::operator*(const int broj) const {
    return Complex( real * broj,
                   imaginary * broj );
}

Complex operator*(int i , const Complex & complex) {
    return Complex( i * complex.real, i * complex.imaginary );
}

bool Complex::operator==(const Complex & complex) {
    return (real == complex.real && imaginary == complex.imaginary);
}

bool Complex::operator!=(const Complex & complex) {
    return (real != complex.real || imaginary != complex.imaginary);
}

Complex& Complex::operator+=(const Complex & complex) {
    *this = *this + complex;
    return *this;
}

Complex& Complex::operator-=(const Complex & complex) {
    *this = *this - complex;
    return *this;
}

Complex& Complex::operator*=(const Complex & complex) {
    *this = *this * complex;
    return *this;
}
