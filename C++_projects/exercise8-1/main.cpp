// p08_06.cpp
// Drajver za klasata Complex
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include "complex1.h"

int main()
{
    Complex x, y( 4.3, 8.2 ), z( 3.3, 1.1 );
    int i=2;

    cout<<"Vnesi vrednosti za x"<<endl;
    cin>>x;

    cout << "x: ";
    cout<<x;
    cout << "\ny: ";
    cout<<y;
    cout << "\nz: ";
    cout<<z;

    x = y + z;
    cout << "\n\nx = y + z:\n";
    cout<<x;
    cout << " = ";
    cout<<y;
    cout << " + ";
    cout<<z;

    x = y - z;
    cout << "\n\nx = y - z:\n";
    cout<<x;
    cout << " = ";
    cout<<y;
    cout << " - ";
    cout<<z;
    cout << endl;

    x = y * z;
    cout << "\n\nx = y * z:\n";
    cout<<x;
    cout << " = ";
    cout<<y;
    cout << " - ";
    cout<<z;
    cout << endl;

    x += y;
    cout << "\n\nx = x+=y:\n";
    cout<<x;
    cout << " = ";
    cout<<y;
    cout << " - ";
    cout<<z;
    cout << endl;

    x -= z;
    cout << "\n\nx = x-=z:\n";
    cout<<x;
    cout << " = ";
    cout<<y;
    cout << " - ";
    cout<<z;
    cout << endl;

    x *= y;
    cout << "\n\nx = x*=y:\n";
    cout<<x;
    cout << " = ";
    cout<<y;
    cout << " - ";
    cout<<z;
    cout << endl;

    x = i * y;
    cout << "\n\nx = i*y:\n";
    cout<<x;
    cout << " = ";
    cout<<y;
    cout << " - ";
    cout<<z;
    cout << endl;

    return 0;
} // kraj main
