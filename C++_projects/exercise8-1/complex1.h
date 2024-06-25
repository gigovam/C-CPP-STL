// complex1.h
// Definicija na klasata Complex
#ifndef COMPLEX1_H
#define COMPLEX1_H
#include <iomanip>
using std::ostream;
using std::istream;


class Complex {
public:
    Complex( double = 0.0, double = 0.0 );       // konstruktor
    Complex operator+( const Complex & ) const;  // sobiranje
    Complex operator-( const Complex & ) const;  // odzemanje
    const Complex &operator=( const Complex & ); // dodeluvanje
    friend ostream &operator<<( ostream&, const Complex & );
    friend istream &operator>>( istream& input, Complex & object);        // izlez
    Complex operator*(const Complex &) const;
    Complex operator*(const int) const;
    friend Complex operator*(int, const Complex &);
    bool operator==(const Complex &);
    bool operator!=(const Complex &);
    Complex& operator+=(const Complex &);
    Complex& operator-=(const Complex &);
    Complex& operator*=(const Complex &);

private:
    double real;       // realen del
    double imaginary;  // imaginaren del
}; // kraj na klasta Complex

#endif

